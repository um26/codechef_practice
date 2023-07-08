#include <stdio.h>

int main(void) {
    int i,T,N,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        int A[N];
        if(N%2==0){
            for(j=1;j<=N;j++)
            {
                if(j==1||j==N){
                    A[j]=1;
                }
                else
                A[j]=0;
            }
        }
        else
        {
            for(j=1;j<=N;j++)
            {
                if(j==1||j==N){
                    A[j]=0;
                }
                else
                A[j]=1;
            }
        }
        for(j=1;j<=N;j++)
        {
        printf("%d",A[j]);
        }
        printf("\n");
        
    }
	return 0;
}

