/**
 * Author: Deean
 * Date: 2022-10-22 20:55
 * FileName: algorithm/P2413.c
 * Description: 
 */

#include "..\common\leetcode.h"

int smallestEvenMultiple(int n){
    return n % 2 == 0 ? n : n * 2;
}

int main() {
    int ans = smallestEvenMultiple(10);
    printf("%d", ans);
    return 0;
}