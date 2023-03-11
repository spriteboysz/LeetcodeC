/**
 * Author: Deean
 * Date: 2023-03-11 16:32
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int busyStudent(int *startTime, int startTimeSize, int *endTime, int endTimeSize, int queryTime) {
    int cnt = 0;
    for (int i = 0; i < startTimeSize && startTimeSize == endTimeSize; ++i) {
        if (queryTime >= startTime[i] && queryTime <= endTime[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int startTime[] = {1, 2, 3}, endTime[] = {3, 2, 7};
    int ans = busyStudent(startTime, 3, endTime, 3, 4);
    printf("%d\n", ans);
    return 0;
}
