/**
 * Author: Deean
 * Date: 2023-03-17 22:28
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MAX_VAL 10000

int gcd(int x, int y) {
    return x == 0 ? y : gcd(y % x, x);
}

bool hasGroupsSizeX(int *deck, int deckSize) {
    int hash[MAX_VAL] = {0};
    for (int i = 0; i < deckSize; ++i) {
        hash[deck[i]]++;
    }

    int x = -1;
    for (int i = 0; i < MAX_VAL; ++i) {
        if (hash[i] > 0) {
            if (x == -1) {
                x = hash[i];
            } else {
                x = gcd(x, hash[i]);
            }
        }
    }
    return x >= 2;
}

int main() {
    int deck[] = {1, 2, 3, 4, 4, 3, 2, 1};
    int ans = hasGroupsSizeX(deck, 8);
    printf("%d\n", ans);
    return 0;
}
