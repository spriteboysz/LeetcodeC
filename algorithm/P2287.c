/**
 * Author: Deean
 * Date: 2023-03-05 15:52
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int rearrangeCharacters(char *s, char *target) {
    int map1[26] = {0}, map2[26] = {0};
    for (int i = 0; i < strlen(s); ++i) {
        map1[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(target); ++i) {
        map2[target[i] - 'a']++;
    }
    int cnt = strlen(s);
    for (int i = 0; i < 26; ++i) {
        if (map2[i] != 0) {
            cnt = fmin(cnt, map1[i] / map2[i]);
        }
    }
    return cnt;
}

int main() {
    int ans = rearrangeCharacters("ilovecodingonleetcode", "code");
    printf("%d\n", ans);
    return 0;
}
