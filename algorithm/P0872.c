/**
 * Author: Deean
 * Date: 2023-03-17 21:40
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

void dfs(struct TreeNode *root, int *leaf, int *n) {
    if (!root->left && !root->right) {
        leaf[(*n)++] = root->val;
    }
    if (root->left) {
        dfs(root->left, leaf, n);
    }
    if (root->right) {
        dfs(root->right, leaf, n);
    }
}

bool leafSimilar(struct TreeNode *root1, struct TreeNode *root2) {
    int leaf1[200], leaf2[200], n1 = 0, n2 = 0;
    dfs(root1, leaf1, &n1);
    dfs(root2, leaf2, &n2);
    if (n1 != n2) return false;
    for (int i = 0; i < n1; ++i) {
        if (leaf1[i] != leaf2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    struct TreeNode *root1 = treeParse("[3,5,1,6,2,9,8,null,null,7,4]");
    struct TreeNode *root2 = treeParse("[3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]");
    int ans = leafSimilar(root1, root2);
    printf("%d\n", ans);
    return 0;
}
