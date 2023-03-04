/**
 * Author: Deean
 * Date: 2023-03-04 16:16
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool haveConflict(char **event1, int event1Size, char **event2, int event2Size) {
    return strcmp(event1[event1Size - 1], event2[0]) >= 0 && strcmp(event1[0], event2[event2Size - 1]) <= 0;
}

int main() {
    char *event1[] = {"01:15", "02:00"}, *event2[] = {"02:00", "03:00"};
    bool ans = haveConflict(event1, 2, event2, 2);
    printf("%d\n", ans);
    return 0;
}
