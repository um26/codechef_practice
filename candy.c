//Abhi is a salesman. He was given two types of candies, which he is selling in N different cities. A given type of candy must have distinct prices in all N cities.

#include <stdio.h>

int main(void) {
    int i,T,N,j,k,count;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        int A[2*N];
        for(j=1;j<=2*N;j++)
        {
            scanf("%d",&A[j]);
        }
        
        for(j=1;j<=2*N;j++){
            
            count=1;
            for(k=j+1;k<=2*N;k++){
                if(A[j]==A[k])
                count++;
            }
            if(count>2)
            break;
        }
        if(count>2)
        printf("NO\n");
        else
        printf("YES\n");
    }
	return 0;
}
