/**
 * Author: Deean
 * Date: 2023-03-05 21:34
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"
#include "..\uthash\src\uthash.h"

#define MAX_NUM 26

typedef struct hash {
    char key[MAX_NUM];
    int count;
    UT_hash_handle hh;
} hashTable;

char *kthDistinct(char **arr, int arrSize, int k) {
    hashTable *g_user = NULL;
    for (int i = 0; i < arrSize; i++) {
        hashTable *s = NULL;
        HASH_FIND_STR(g_user, arr[i], s);
        if (s == NULL) {
            s = (hashTable *) malloc(sizeof(hashTable));
            strcpy(s->key, arr[i]);
            s->count = 1;
            HASH_ADD_STR(g_user, key, s);
        } else {
            s->count++;
        }
    }
    hashTable *s = NULL;
    hashTable *tmp = NULL;
    HASH_ITER(hh, g_user, s, tmp)
    {
        if (s->count == 1) {
            k--;
        }
        if (k == 0) {
            return s->key;
        }
    }
    return "";
}

int main() {
    char *arr[] = {"d", "b", "c", "b", "c", "a"};
    char *ans = kthDistinct(arr, 6, 2);
    puts(ans);
    return 0;
}
