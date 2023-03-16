/**
 * Author: Deean
 * Date: 2023-03-15 22:43
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool isUnivalTree(struct TreeNode *root) {
    if (!root) {
        return true;
    }
    if (root->left) {
        if (root->val != root->left->val || !isUnivalTree(root->left)) {
            return false;
        }
    }
    if (root->right) {
        if (root->val != root->right->val || !isUnivalTree(root->right)) {
            return false;
        }
    }
    return true;
}

int main() {
    struct TreeNode *root = treeParse("[1,1,1,1,1,null,1]");
    int ans = isUnivalTree(root);
    printf("%d\n", ans);
    return 0;
}
