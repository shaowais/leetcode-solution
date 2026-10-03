#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    char* prefix = strdup(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        while (strncmp(prefix, strs[i], strlen(prefix)) != 0) {
            prefix[strlen(prefix) - 1] = '\0';
            if (strlen(prefix) == 0) return "";
        }
    }
    return prefix;
}

int main() {
    // Test Case 1: Standard Common Prefix
    char* t1[] = {"flower", "flow", "flight"};
    printf("Test 1: \"%s\" (Expected: \"fl\")\n", longestCommonPrefix(t1, 3));

    // Test Case 2: Edge Case (No Common Prefix)
    char* t2[] = {"dog", "racecar", "car"};
    printf("Test 2: \"%s\" (Expected: \"\")\n", longestCommonPrefix(t2, 3));

    return 0;
}