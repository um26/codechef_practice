// given 3 integers: A, B and C - you need to find the difference between the highest and the lowest of the given 3 integers

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        int maximum = A > B ? (A > C ? A : C) : (B > C ? B : C);
        int minimum = A < B ? (A < C ? A : C) : (B < C ? B : C);
        int D = maximum - minimum;
        printf("%d\n",D);
    }
    return 0;
}