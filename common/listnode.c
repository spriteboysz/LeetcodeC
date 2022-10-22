/**
 * Author: Deean
 * Date: 2022-10-22 23:15
 * FileName: common/listnode.c
 * Description: 
 */

#include "array.h"
#include "listnode.h"
#include <stdlib.h> /* NULL, malloc(), free() */

static struct ListNode *makeByIndex(arrayEntry *e, int index) {
    int size = arraySize(e);
    if (index >= size) return NULL;

    struct ListNode *list = malloc(sizeof(struct ListNode));
    list->val = ((int *)arrayValue(e))[index];
    list->next = makeByIndex(e, index + 1);
    return list;
}

struct ListNode *linkedlistParse(const char *str) {
    arrayEntry *e = arrayParse1D(str, ARRAY_INT);
    struct ListNode *list = makeByIndex(e, 0);
    arrayFree(e);
    return list;
}

char *linkedlistToString(struct ListNode *list) {
    int len = linkedlistLength(list);
    int *array = malloc(sizeof(int) * len);

    for (int i = 0; i < len; ++i, list = list->next)
        array[i] = list->val;

    return arrayToString1D(array, len, ARRAY_INT);
}

void linkedlistFree(struct ListNode *list) {
    struct ListNode *tmp;
    while (list) {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

int linkedlistLength(struct ListNode *list) {
    int length = 0;
    while (list != NULL) {
        list = list->next;
        ++length;
    }
    return length;
}