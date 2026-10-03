#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    // Test Case 1: Target Present
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 1: %d (Expected: 4)\n", search(nums1, 6, 9));

    // Test Case 2: Target Not Present (Edge Case)
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    printf("Test 2: %d (Expected: -1)\n", search(nums2, 6, 2));

    return 0;
}