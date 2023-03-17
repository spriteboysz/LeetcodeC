/**
 * Author: Deean
 * Date: 2023-03-17 21:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool lemonadeChange(int *bills, int billsSize) {
    int five = 0, ten = 0;
    for (int i = 0; i < billsSize; i++) {
        if (bills[i] == 5) {
            five++;
        } else if (bills[i] == 10) {
            if (five == 0) {
                return false;
            }
            five--;
            ten++;
        } else {
            if (five > 0 && ten > 0) {
                five--;
                ten--;
            } else if (five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int bills[] = {5, 5, 5, 10, 20};
    int ans = lemonadeChange(bills, 5);
    printf("%d\n", ans);
    return 0;
}
