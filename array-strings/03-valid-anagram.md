## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a fixed-size frequency array of size 26 to count character frequencies. Increment frequency for characters in string `s` and decrement for string `t`.

### Complexity
- **Time:** O(n)
- **Space:** O(1) — constant auxiliary space of 26 integers.

### Notes
Handles edge cases where string lengths differ before executing frequency counting.