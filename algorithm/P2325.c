/**
 * Author: Deean
 * Date: 2023-03-05 16:51
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *decodeMessage(char *key, char *message) {
    char alphabet[26] = {0};
    for (int i = 0, j = 0; key[i] != '\0'; i++) {
        char c = key[i];
        if (c != ' ' && !alphabet[c - 'a']) {
            alphabet[c - 'a'] = j + 'a';
            j++;
        }
    }

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] != ' ') {
            message[i] = alphabet[message[i] - 'a'];
        }
    }
    return message;
}

int main() {
    char *key = "the quick brown fox jumps over the lazy dog";
    char *message = "vkbs bs t suepuv";
    char *ans = decodeMessage(key, message);
    puts(ans);
    return 0;
}
