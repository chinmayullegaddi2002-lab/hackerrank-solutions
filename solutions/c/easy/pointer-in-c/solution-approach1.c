// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
// Problem     Pointers in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-04, 10:48 a.m.
// ──────────────────────────────────────────────────

#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;
    
    if (diff < 0) {
        diff = -diff;
    }
    
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
