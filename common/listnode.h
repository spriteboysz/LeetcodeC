/**
 * Author: Deean
 * Date: 2022-10-22 23:14
 * FileName: common/listnode.h
 * Description: 
 */

#ifndef COMMON_LISTNODE_H_
#define COMMON_LISTNODE_H_

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *linkedlistParse(const char *str);
char *linkedlistToString(struct ListNode *list);
void linkedlistFree(struct ListNode *list);

int linkedlistLength(struct ListNode *list);

#endif /* COMMON_LISTNODE_H_ */
