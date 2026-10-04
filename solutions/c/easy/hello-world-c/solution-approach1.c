// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
// Problem     "Hello World!" in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-04, 10:33 a.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("Hello, World!\n");
    printf("%s",s); 
    return 0;
}
