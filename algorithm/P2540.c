/**
 * Author: Deean
 * Date: 2023-03-04 11:24
 * FileName: algorithm
 * Description: 2540. 最小公共值
 */

#include "..\common\leetcode.h"

int getCommon(int *nums1, int nums1Size, int *nums2, int nums2Size) {
    for (int i = 0, j = 0; i < nums1Size && j < nums2Size;) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            return nums1[i];
        }
    }
    return -1;
}

int main() {
    arrayEntry *e1 = arrayParse1D("[1,2,3]", ARRAY_INT);
    arrayEntry *e2 = arrayParse1D("[2,4]", ARRAY_INT);
    int ans = getCommon(arrayValue(e1), arraySize(e1), arrayValue(e2), arraySize(e2));
    printf("%d\n", ans);
    assert(ans == 2);
    return 0;
}
