//check divisiblility of N by A & B

#include <stdio.h>

int main() {
    int t, N, A, B;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &N, &A, &B);
        if (N%A == 0 && N%B == 0) {
            printf("N is divisible by A and B\n");
        }
        else if (N % A == 0) {
            printf("N is divisible by only A\n");
        }
        else if (N % B == 0) {
            printf("N is divisible by only B\n");
        }
        else {
            printf("N is divisible by neither A nor B\n");
        }
    }
    return 0;
}
