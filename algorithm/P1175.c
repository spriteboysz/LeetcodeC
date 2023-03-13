/**
 * Author: Deean
 * Date: 2023-03-12 22:35
 * FileName: algorithm
 * Description: 
 */

#include "..\common\leetcode.h"

#define MOD 1000000007

bool isPrime(int num) {
    if (num == 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

long factorial(int num) {
    long product = 1;
    for (int i = 1; i <= num; ++i) {
        product *= i;
        product %= MOD;
    }
    return product;
}

int numPrimeArrangements(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (isPrime(i)) {
            cnt++;
        }
    }
    return (int) (factorial(cnt) * factorial(n - cnt) % MOD);
}

int main() {
    int ans = numPrimeArrangements(100);
    printf("%d\n", ans);
    return 0;
}
