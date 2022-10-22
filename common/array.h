/**
 * Author: Deean
 * Date: 2022-10-22 23:11
 * FileName: common/array.h
 * Description: 
 */

#ifndef COMMON_ARRAY_H_
#define COMMON_ARRAY_H_

typedef struct arrayEntry arrayEntry;

typedef enum {
    ARRAY_INT,
    ARRAY_CHAR,
    ARRAY_DOUBLE,
    ARRAY_STRING,
} arrayType;

/* 弃用! 调用方最好直接指定维度 */
/* arrayEntry *arrayParse(const char *str, arrayType type); */
arrayEntry *arrayParse1D(const char *str, arrayType type);
arrayEntry *arrayParse2D(const char *str, arrayType type);

arrayEntry *arrayFrom1D(void *v, int size, arrayType type);
arrayEntry *arrayFrom2D(void *v, int row, int *cols, arrayType type);
arrayEntry *arrayFrom2DSameCol(void *v, int row, int col, arrayType type);

void arrayFree(arrayEntry *entry);

char *arrayToString(arrayEntry *entry);
char *arrayToString1D(void *v, int size, arrayType type);
char *arrayToString2D(void *v, int row, int *cols, arrayType type);
char *arrayToString2DSameCol(void *v, int row, int col, arrayType type);

/* getter, setter */
void *arrayValue(arrayEntry *entry);
int arraySize(arrayEntry *entry);
void arraySetSize(arrayEntry *entry, int size);

void arraySetPrecision(arrayEntry *entry, int precision);

int arrayRow(arrayEntry *entry);
int *arrayCols(arrayEntry *entry);
int arrayCol(arrayEntry *entry);

#endif /* COMMON_ARRAY_H_ */
