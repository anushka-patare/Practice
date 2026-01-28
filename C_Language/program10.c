#include<stdio.h>
void ReverseDisplay(int n)
{
    int iCnt =0;

    for(iCnt=n; iCnt>=1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int n = 0;
    printf("Enter value of n:\n");
    scanf("%d",&n);

    ReverseDisplay(n);

    return 0;
}