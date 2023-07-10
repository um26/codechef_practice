// Chef has infinite coins in denominations of rupees 5 and rupees 10.
// Find the minimum number of coins Chef needs, to pay exactly X rupees.
// If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int X;
        scanf("%d", &X);
        int count=0;
        while(X>=10)
        {
            X=X-10;
            count++;
        }
        while(X>=5)
        {
            X=X-5;
            count++;
        }
        if(X==0) printf("%d\n",count);
        else printf("-1\n");

        
    }

    return 0;
}