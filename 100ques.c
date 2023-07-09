// There are 100 questions in a paper.
// Each question carries +3 marks for correct answer,
// -1 marks for incorrect answer i.e. one mark is deducted for each incorrect answer,
// 0 marks for an unattempted question


#include <stdio.h>

int main()
{
    int t,X;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&X);
        if(X%3==0) printf("0\n");
        else if((X+1)%3 == 0) printf("1\n");
        else printf("2\n");


    }
    return 0;
}