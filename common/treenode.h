/**
 * Author: Deean
 * Date: 2022-10-22 23:09
 * FileName: common/treenode.h
 * Description: 
 */

#ifndef COMMON_TREENODE_H_
#define COMMON_TREENODE_H_

#include "array.h"
#include "queue.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TREE_NODE_NULL "null"

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

struct TreeNode *treeNewNode(int val) {
    struct TreeNode *node = malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = node->right = NULL;
    return node;
}

static struct TreeNode *buildByArray(char **a, int size) {
    if (size == 0) return NULL;

    int index = 0;
    char *str = a[index++];
    if (strcmp(str, TREE_NODE_NULL) == 0) return NULL;

    /** 存储按层级遍历的节点 */
    struct Queue *queue = queueMake();

    struct TreeNode *tree = treeNewNode(atoi(str));
    queueOffer(queue, tree);

    while (index < size) {
        struct TreeNode *node = queuePoll(queue);
        for (int i = 0; i < 2; ++i)
            if (index < size && strcmp((str = a[index++]), TREE_NODE_NULL) != 0)
                queueOffer(queue,
                           i == 0 ? (node->left = treeNewNode(atoi(str))) : (node->right = treeNewNode(atoi(str))));
    }

    queueFree(queue);
    return tree;
}

struct TreeNode *treeParse(const char *str) {
    arrayEntry *e = arrayParse1D(str, ARRAY_STRING);
    struct TreeNode *tree = buildByArray(arrayValue(e), arraySize(e));
    arrayFree(e);
    return tree;
}

char *treeToString(struct TreeNode *tree) {
    int height = treeHeight(tree);
    if (height > 10) height = 10;

    int len = pow(2, height) - 1;
    if (len == 0) return arrayToString1D(NULL, 0, ARRAY_STRING);

    char **array = malloc(sizeof(char *) * len);
    for (int i = 0; i < len; ++i) array[i] = NULL;

    int index = 0, nullLen = strlen(TREE_NODE_NULL) + 1;

    /** 存储按层级遍历的节点 */
    struct Queue *queue = queueMake();
    queueOffer(queue, tree);

    while (!queueIsEmpty(queue) && index < len) {
        struct TreeNode *node = (struct TreeNode *) queuePoll(queue);
        if (node != NULL) {
            int size = snprintf(NULL, 0, "%d", node->val) + 1;
            snprintf((array[index++] = malloc(size)), size, "%d", node->val);
            queueOffer(queue, node->left);
            queueOffer(queue, node->right);
        } else {
            strncpy((array[index++] = malloc(nullLen)), TREE_NODE_NULL, nullLen);
        }
    }
    queueFree(queue);

    while (!array[len - 1]) len--;
    while (!strcmp(array[len - 1], TREE_NODE_NULL)) free(array[--len]);

    return arrayToString1D(array, len, ARRAY_STRING);
}

void treeFree(struct TreeNode *tree) {
    if (tree == NULL) return;
    treeFree(tree->left);
    treeFree(tree->right);
    free(tree);
}

int treeHeight(struct TreeNode *tree) {
    if (tree == NULL) return 0;
    int leftHeight = treeHeight(tree->left);
    int rightHeight = treeHeight(tree->right);
    return leftHeight >= rightHeight ? leftHeight + 1 : rightHeight + 1;
}

int treeCount(struct TreeNode *tree) {
    if (tree == NULL) return 0;
    return 1 + treeCount(tree->left) + treeCount(tree->right);
}

#endif /* COMMON_TREENODE_H_ */
