/**
 * Author: Deean
 * Date: 2023-03-11 19:12
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int numWaterBottles(int numBottles, int numExchange){
    return numBottles >= numExchange ? (numBottles - numExchange) / (numExchange - 1) + 1 + numBottles : numBottles;
}

int main() {
    int ans = numWaterBottles(9, 3);
    printf("%d\n", ans);
    return 0;
}
