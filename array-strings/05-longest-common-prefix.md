## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Initialized prefix as the first string and iteratively trimmed characters from the end until it matches as a prefix for all remaining strings.

### Complexity
- **Time:** O(S) — where S is the sum of all characters in all strings.
- **Space:** O(1) — string dynamic copy allocation.

### Notes
Effectively handles empty prefix conditions early in execution.