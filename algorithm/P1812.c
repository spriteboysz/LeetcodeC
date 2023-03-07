/**
 * Author: Deean
 * Date: 2023-03-07 21:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"


bool squareIsWhite(char *coordinates) {
    return (coordinates[0] + coordinates[1]) % 2;
}

int main() {
    int ans = squareIsWhite("a1");
    printf("%d\n", ans);
    return 0;
}
