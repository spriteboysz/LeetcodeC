/**
 * Author: Deean
 * Date: 2023-03-14 21:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool divisorGame(int n){
    return n % 2 == 0;
}

int main() {
    int ans = divisorGame(2);
    printf("%d\n", ans);
    return 0;
}
