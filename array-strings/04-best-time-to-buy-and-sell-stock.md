## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Maintained a running minimum price while iterating through the array, updating maximum profit dynamically when a higher selling price is found.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Avoided O(n²) nested loop by utilizing a single-pass greedy strategy.