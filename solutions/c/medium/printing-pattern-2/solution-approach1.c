// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true
// Problem     Printing Pattern Using Loops
// Difficulty  Medium
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-04, 11:00 a.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    // Complete the code to print the pattern.
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum distance from the current cell to any of the 4 edges
            int min_i = i < (size - 1 - i) ? i : (size - 1 - i);
            int min_j = j < (size - 1 - j) ? j : (size - 1 - j);
            int min_dist = min_i < min_j ? min_i : min_j;
            
            // The value to print is n minus that minimum distance
            printf("%d ", n - min_dist);
        }
        printf("\n");
    }
    
    return 0;
}
