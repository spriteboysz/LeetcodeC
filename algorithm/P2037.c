/**
 * Author: Deean
 * Date: 2023-03-05 20:42
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int minMovesToSeat(int *seats, int seatsSize, int *students, int studentsSize) {
    qsort(seats, seatsSize, sizeof(int), cmp);
    qsort(students, studentsSize, sizeof(int), cmp);
    int cnt = 0;
    for (int i = 0; i < seatsSize; ++i) {
        cnt += abs(seats[i] - students[i]);
    }
    return cnt;
}

int main() {
    int seats[] = {3, 1, 5};
    int students[] = {2, 7, 4};
    int ans = minMovesToSeat(seats, 3, students, 3);
    printf("%d\n", ans);
    return 0;
}
