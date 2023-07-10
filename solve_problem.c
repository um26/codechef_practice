// There are two problems in a contest.
// Problem A is worth 500 points at the start of the contest.
// Problem B is worth 1000 points at the start of the contest.
// Once the contest starts, after each minute:
// Maximum points of Problem A reduce by 2 points .
// Maximum points of Problem B reduce by 4 points.
// It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.
// Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int x, y, a, b;
        scanf("%d %d", &x, &y);


        a=(500-(2*x) + (1000-4*(y+x)));
        
	    b=(1000-(4*y) + (500-2*(y+x)));
	    
	    if(a>b) {
	        printf("%d\n",a);
	    }
	
	    else {
	        printf("%d\n",b);
	    }

    }
    return 0;
}
