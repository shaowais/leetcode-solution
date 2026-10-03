#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main() {
    int returnSize;

    // Test Case 1: Standard Input
    int test1[] = {2, 7, 11, 15};
    int* res1 = twoSum(test1, 4, 9, &returnSize);
    printf("Test 1: [%d, %d] (Expected: [0, 1])\n", res1[0], res1[1]);
    free(res1);

    // Test Case 2: Edge Case (Negative numbers)
    int test2[] = {-3, 4, 3, 90};
    int* res2 = twoSum(test2, 4, 0, &returnSize);
    printf("Test 2: [%d, %d] (Expected: [0, 2])\n", res2[0], res2[1]);
    free(res2);

    return 0;
}