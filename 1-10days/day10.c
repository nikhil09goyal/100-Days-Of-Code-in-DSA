/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES

Explanation: String reads same forwards and backwards*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1001]; // Buffer to store the string

    // Read the input string
    if (scanf("%s", s) == 1) {
        int left = 0;
        int right = strlen(s) - 1;
        int isPalindrome = 1; // Flag: 1 represents true, 0 represents false

        // Two-pointer loop
        while (left < right) {
            // Compare characters at both ends
            if (s[left] != s[right]) {
                isPalindrome = 0; // Mismatch found
                break;
            }
            // Move pointers inward
            left++;
            right--;
        }

        if (isPalindrome) {
            printf("YES");
        } else {
            printf("NO");
        }
    }

    return 0;
}