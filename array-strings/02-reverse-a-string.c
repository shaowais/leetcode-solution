#include <stdio.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Standard Input
    char test1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(test1, 5);
    printf("Test 1: %s (Expected: olleh)\n", test1);

    // Test Case 2: Edge Case (Single Character)
    char test2[] = {'A'};
    reverseString(test2, 1);
    printf("Test 2: %s (Expected: A)\n", test2);

    return 0;
}
