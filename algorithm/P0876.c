/**
 * Author: Deean
 * Date: 2023-03-17 21:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

struct ListNode *middleNode(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    struct ListNode *head = linkedlistParse("[1,2,3,4,5,6]");
    struct ListNode *ans = middleNode(head);
    puts(linkedlistToString(ans));
    return 0;
}
