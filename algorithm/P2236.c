/**
 * Author: Deean
 * Date: 2023-03-04 19:47
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkTree(struct TreeNode *root) {
    return root->left->val + root->right->val == root->val;
}

int main() {
    char *a[] = {"10", "4", "6"};
    struct TreeNode *root = buildByArray(a, 3);
    bool ans = checkTree(root);
    printf("%d\n", ans);
    return 0;
}
