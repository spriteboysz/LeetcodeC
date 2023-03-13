/**
 * Author: Deean
 * Date: 2023-03-12 21:53
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int maxNumberOfBalloons(char *text) {
    int balloon[5] = {0};
    for (int i = 0; text[i] != '\0'; ++i) {
        switch (text[i]) {
            case 'b':
                balloon[0] += 2;
                break;
            case 'a':
                balloon[1] += 2;
                break;
            case 'l':
                balloon[2] += 1;
                break;
            case 'o':
                balloon[3] += 1;
                break;
            case 'n':
                balloon[4] += 2;
                break;
            default :
                continue;
        }
    }
    int cnt = strlen(text);
    for (int i = 0; i < 5; ++i) {
        cnt = fmin(cnt, balloon[i] / 2);
    }
    return cnt;
}

int main() {
    int ans = maxNumberOfBalloons("loonbalxballpoon");
    printf("%d\n", ans);
    return 0;
}
