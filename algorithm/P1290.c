/**
 * Author: Deean
 * Date: 2023-03-12 17:49
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int getDecimalValue(struct ListNode *head) {
    int sum = 0;
    while (head) {
        sum = sum * 2 + head->val;
        head = head->next;
    }
    return sum;
}

int main() {
    struct ListNode *head = linkedlistParse("[1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]");
    int ans = getDecimalValue(head);
    printf("%d\n", ans);
    return 0;
}
