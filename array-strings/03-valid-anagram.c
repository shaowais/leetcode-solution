#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) return false;
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    // Test Case 1: Standard Anagram
    char s1[] = "anagram", t1[] = "nagaram";
    printf("Test 1: %s (Expected: 1)\n", isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2: Edge Case (Different lengths / Not Anagram)
    char s2[] = "rat", t2[] = "car";
    printf("Test 2: %s (Expected: 0)\n", isAnagram(s2, t2) ? "true" : "false");

    return 0;
}
