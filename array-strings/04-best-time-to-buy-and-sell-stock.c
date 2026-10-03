#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    // Test Case 1: Standard Input
    int p1[] = {7, 1, 5, 3, 6, 4};
    printf("Test 1: %d (Expected: 5)\n", maxProfit(p1, 6));

    // Test Case 2: Edge Case (Decreasing prices / No profit)
    int p2[] = {7, 6, 4, 3, 1};
    printf("Test 2: %d (Expected: 0)\n", maxProfit(p2, 5));

    return 0;
}