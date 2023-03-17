/**
 * Author: Deean
 * Date: 2023-03-16 22:48
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int rangeSumBST(struct TreeNode *root, int low, int high) {
    if (root == NULL) return 0;
    if (root->val > high) {
        return rangeSumBST(root->left, low, high);
    }
    if (root->val < low) {
        return rangeSumBST(root->right, low, high);
    }
    return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
}

int main() {
    struct TreeNode *root = treeParse("[10,5,15,3,7,null,18]");
    int ans = rangeSumBST(root, 7, 15);
    printf("%d\n", ans);
    return 0;
}
