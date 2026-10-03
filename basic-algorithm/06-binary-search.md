## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used a standard two-pointer iterative divide-and-conquer strategy (`low` and `high`) on a sorted array, calculating midpoints safely to prevent integer overflow.

### Complexity
- **Time:** O(log n)
- **Space:** O(1)

### Notes
Using `low + (high - low) / 2` avoids potential overflow compared to `(low + high) / 2`.