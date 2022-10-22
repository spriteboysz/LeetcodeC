/**
 * Author: Deean
 * Date: 2022-10-22 23:09
 * FileName: common/treenode.h
 * Description: 
 */

#ifndef COMMON_TREENODE_H_
#define COMMON_TREENODE_H_

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *treeNewNode(int val);
struct TreeNode *treeParse(const char *str);
char *treeToString(struct TreeNode *tree);
void treeFree(struct TreeNode *tree);

int treeHeight(struct TreeNode *tree);
int treeCount(struct TreeNode *tree);

#endif /* COMMON_TREENODE_H_ */
