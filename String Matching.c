//String matching
#include <stdio.h>
#include <string.h>

// Function to implement brute-force string matching
int BruteForceStringMatch(char T[], char P[]) {
    int n = strlen(T);  // Length of the text
    int m = strlen(P);  // Length of the pattern

    // Iterate over the text until the point where the remaining characters are less than the pattern length
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        
        // Check if the pattern matches the text at this position
        while (j < m && P[j] == T[i + j]) {
            j++;
        }
        
        // If the pattern is fully matched, return the starting index
        if (j == m) {
            return i;
        }
    }
    
    // If no match is found, return -1
    return -1;
}

int main() {
    char T[100], P[100];
    
    // Input text and pattern from user
    printf("Enter the text: ");
    gets(T);
    
    printf("Enter the pattern: ");
    gets(P);
    
    // Call the brute-force string matching function
    int result = BruteForceStringMatch(T, P);
    
    // Display the result
    if (result != -1) {
        printf("Pattern found at index %d\n", result);
    } else {
        printf("Pattern not found\n");
    }
    
    return 0;
}
