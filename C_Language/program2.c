// It returns float value but not gives actual output

#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    float fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    fRet = iNo1 / iNo2;
    printf("Division of two numbers is :%f\n",fRet);

    return 0;
}