#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int lastNonZero = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[lastNonZero];
            nums[lastNonZero] = nums[i];
            nums[i] = temp;
            lastNonZero++;
        }
    }
}

int main() {
    // Test Case 1: Standard Mixed Array
    int t1[] = {0, 1, 0, 3, 12};
    moveZeroes(t1, 5);
    printf("Test 1: [%d, %d, %d, %d, %d] (Expected: [1, 3, 12, 0, 0])\n", t1[0], t1[1], t1[2], t1[3], t1[4]);

    // Test Case 2: Single Element / All Zeroes (Edge Case)
    int t2[] = {0};
    moveZeroes(t2, 1);
    printf("Test 2: [%d] (Expected: [0])\n", t2[0]);

    return 0;
}