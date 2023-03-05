/**
 * Author: Deean
 * Date: 2023-03-05 23:00
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"
#include "..\uthash\src\uthash.h"

typedef struct Hash {
    char *word;
    int cnt;
    UT_hash_handle hh;
} Hash;

int countWords(char **words1, int words1Size, char **words2, int words2Size) {
    Hash *hash1 = NULL, *hash2 = NULL;
    for (int i = 0; i < words1Size; ++i) {
        Hash *temp = NULL;
        HASH_FIND_STR(hash1, words1[i], temp);
        if (temp == NULL) {
            temp = (Hash *) malloc(sizeof(Hash));
            temp->word = words1[i];
            temp->cnt = 1;
            HASH_ADD_STR(hash1, word, temp);
        } else {
            temp->cnt++;
        }
    }
    for (int i = 0; i < words2Size; ++i) {
        Hash *temp = NULL;
        HASH_FIND_STR(hash2, words2[i], temp);
        if (temp == NULL) {
            temp = (Hash *) malloc(sizeof(Hash));
            temp->word = words2[i];
            temp->cnt = 1;
            HASH_ADD_STR(hash2, word, temp);
        } else {
            temp->cnt++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < words2Size; ++i) {
        Hash *temp1 = NULL, *temp2 = NULL;
        HASH_FIND_STR(hash1, words2[i], temp1);
        HASH_FIND_STR(hash2, words2[i], temp2);
        if (temp1 != NULL && temp1->cnt == 1 && temp2->cnt == 1) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    char *words1[] = {"leetcode", "is", "amazing", "as", "is"};
    char *words2[] = {"amazing", "leetcode", "is"};
    int ans = countWords(words1, 5, words2, 3);
    printf("%d\n", ans);
    return 0;
}
