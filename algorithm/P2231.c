/**
 * Author: Deean
 * Date: 2023-03-04 19:39
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

int largestInteger(int num) {
    int digits[11] = {0};
    int count = 0, temp = num;
    while (temp > 0) {
        digits[count] = temp % 10;
        temp /= 10;
        count++;
    }

    for (int i = count - 1; i >= 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if ((digits[j] % 2 == 1) && (digits[i] % 2 == 1)) {
                if (digits[j] > digits[i]) {
                    temp = digits[i];
                    digits[i] = digits[j];
                    digits[j] = temp;
                }
            } else if ((digits[j] % 2 == 0) && (digits[i] % 2 == 0)) {
                if (digits[j] > digits[i]) {
                    temp = digits[i];
                    digits[i] = digits[j];
                    digits[j] = temp;
                }
            }
        }
    }

    int largest = 0;
    for (int i = count - 1; i >= 0; i--) {
        largest = largest * 10 + digits[i];
    }
    return largest;
}

int main() {
    printf("%d\n", largestInteger(65875));
    return 0;
}
