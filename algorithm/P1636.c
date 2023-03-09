/**
 * Author: Deean
 * Date: 2023-03-09 23:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"
#include "..\uthash\src\uthash.h"

struct hash {
    int val;
    int cnt;
    UT_hash_handle hh;
};

int cmp(const struct hash *a, const struct hash *b) {
    return a->cnt == b->cnt ? (b->val - a->val) : (a->cnt - b->cnt);
}

int *frequencySort(int *nums, int numsSize, int *returnSize) {
    struct hash *user = NULL, *s = NULL;
    for (int i = 0; i < numsSize; ++i) {
        HASH_FIND_INT(user, &nums[i], s);
        if (s) {
            s->cnt++;
        } else {
            s = (struct hash *) malloc(sizeof *s);
            s->val = nums[i];
            s->cnt = 1;
            HASH_ADD_INT(user, val, s);
        }
    }
    HASH_SORT(user, cmp);
    *returnSize = 0;
    for (s = user; s != NULL; s = s->hh.next) {
        while (s->cnt--) {
            nums[(*returnSize)++] = s->val;
        }
    }
    struct hash *current_user, *tmp;
    HASH_ITER(hh, user, current_user, tmp)
    {
        HASH_DEL(user, current_user);
        free(current_user);
    }
    return nums;
}

int main() {
    int nums[] = {1, 1, 2, 2, 2, 3};
    int n;
    int *ans = frequencySort(nums, 6, &n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", ans[i]);
    }
    return 0;
}
