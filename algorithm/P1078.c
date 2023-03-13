/**
 * Author: Deean
 * Date: 2023-03-13 23:57
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char ** findOcurrences(char * text, char * first, char * second, int* returnSize){

}

int main() {
    int n;
    char **ans = findOcurrences("alice is a good girl she is a good student", "a", "good", &n);
    for (int i = 0; i < n; ++i) {
        puts(ans[i]);
    }
    return 0;
}
