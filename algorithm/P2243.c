/**
 * Author: Deean
 * Date: 2023-03-04 20:09
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

char * digitSum(char * s, int k){
    int len = strlen(s);
    int i, j;
    int index = 0;
    int temp = 0, lentemp = 0, sum = 0;
    char temps[4] = {0};
    char *res = (char *)calloc(101, sizeof(char));
    strcpy(res, s);

    while (len > k) { // 当前字符串元素个数是否大于k
        for (i = 0; i < len; i++) {
            temp = res[i] - '0'; // 字符转换为整型
            sum += temp; // 计算元素之和sum
            if ((i + 1) % k == 0 || i == len - 1) { //两个条件
                sprintf(temps, "%d", sum); // 将sum转换为字符串
                lentemp = strlen(temps); // sum的位数
                for (j = 0; j < lentemp; j++) {
                    res[index++] = temps[j]; // 按位数放入字符串中
                }
                sum = 0; // 放完后sum清零
            }

        }
        res[index] = '\0'; // 把后面不用的元素清掉，只保留存放sum的部分
        index = 0;
        len = strlen(res);
    }
    return res;
}

int main() {
    char * ans = digitSum("11111222223", 3);
    puts(ans);
    return 0;
}
