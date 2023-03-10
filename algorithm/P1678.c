/**
 * Author: Deean
 * Date: 2023-03-10 22:54
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char *interpret(char *command) {
    int n = strlen(command);
    char *cmd = (char *) malloc(sizeof(char) * (n + 1));
    int pos = 0;
    for (int i = 0; i < n; ++i) {
        if (command[i] == 'G') {
            pos += sprintf(cmd + pos, "%s", "G");
        } else {
            if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    pos += sprintf(cmd + pos, "%s", "o");
                } else {
                    pos += sprintf(cmd + pos, "%s", "al");
                }
            }
        }
    }
    return cmd;
}

int main() {
    char *ans = interpret("(al)G(al)()()G");
    puts(ans);
    return 0;
}
