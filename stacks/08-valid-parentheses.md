## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Implemented a standard array-backed LIFO stack structure. Pushed opening brackets onto the stack and popped/matched when encountering corresponding closing brackets.

### Complexity
- **Time:** O(n)
- **Space:** O(n)

### Notes
Verifies empty stack condition at the end of string traversal to ensure all opened brackets were properly matched.