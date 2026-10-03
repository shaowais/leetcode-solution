## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer approach where `lastNonZero` tracks the index for non-zero elements while iterating through the array and swapping values in-place.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Performs in-place operations without allocating secondary array storage.