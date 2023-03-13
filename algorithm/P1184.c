/**
 * Author: Deean
 * Date: 2023-03-12 22:23
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int distanceBetweenBusStops(int *distance, int distanceSize, int start, int destination) {
    if (start > destination) {
        int temp = start;
        start = destination;
        destination = temp;
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < distanceSize; i++) {
        if (i >= start && i < destination) {
            sum1 += distance[i];
        } else {
            sum2 += distance[i];
        }
    }
    return fmin(sum1, sum2);
}

int main() {
    int distance[] = {1, 2, 3, 4};
    int ans = distanceBetweenBusStops(distance, 4, 0, 1);
    printf("%d\n", ans);
    return 0;
}
