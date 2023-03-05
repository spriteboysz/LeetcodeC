/**
 * Author: Deean
 * Date: 2023-03-04 19:11
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

bool checkDistances(char *s, int *distance, int distanceSize) {
    int hash[26] = {0};
    for (int i = 0; i < strlen(s); ++i) {
        int j = s[i] - 'a';
        if (hash[j]) {
            if (i - hash[j] != distance[j])
                return false;
        } else {
            hash[j] = i + 1;
        }
    }
    return true;
}


int main() {
    char *s = "abaccb";
    int distance[] = {1, 3, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    bool ans = checkDistances(s, distance, 26);
    printf("%d\n", ans);
    return 0;
}
