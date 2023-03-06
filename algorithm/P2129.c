/**
 * Author: Deean
 * Date: 2023-03-06 21:36
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *capitalizeTitle(char *title) {
    for (int i = 0, j = 0; i <= strlen(title); ++i) {
        if (title[i] == ' ' || title[i] == '\0') {
            if (i - j > 2) {
                title[j] = toupper(title[j]);
            }
            j = i + 1;
        } else {
            title[i] = tolower(title[i]);
        }
    }
    return title;
}

int main() {
    char *ans = capitalizeTitle("capiTalIze tHe titLe");
    puts(ans);
    return 0;
}
