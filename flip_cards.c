// There are N cards on a table, out of which X cards are face-up and the remaining are face-down.
// In one operation, we can do the following:
// Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
// What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?


#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int X,N;
        scanf("%d %d",&N,&X);
        if(X<= N-X) printf("%d\n",X);
        else printf("%d\n",N-X);
    }

    return 0;
}