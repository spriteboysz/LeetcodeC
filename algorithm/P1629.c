/**
 * Author: Deean
 * Date: 2023-03-09 23:20
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char slowestKey(int *releaseTimes, int releaseTimesSize, char *keysPressed) {
    char maximum = keysPressed[0];
    int maxTime = releaseTimes[0];
    for (int i = 1; i < releaseTimesSize; i++) {
        char key = keysPressed[i];
        int time = releaseTimes[i] - releaseTimes[i - 1];
        if (time > maxTime || (time == maxTime && key > maximum)) {
            maximum = key;
            maxTime = time;
        }
    }
    return maximum;
}

int main() {
    int releaseTimes[] = {9, 29, 49, 50};
    int ans = slowestKey(releaseTimes, 4, "cbcd");
    printf("%c\n", ans);
    return 0;
}
