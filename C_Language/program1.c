// It only accepts integer value and return answer into integer

#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    iRet = iNo1 / iNo2;
    printf("Division of two numbers is :%d\n",iRet);

     return 0;
}