#include<stdio.h>

float Division(int iValue1, int iValue2)
{
    float iAns = 0.0f;
    iAns = (float)iValue1 / (float)iValue2;
    return iAns;
}
int main()
{
    int fNo1 = 0, fNo2 = 0;
    float fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%d",&fNo1);

    printf("Enter second number :\n");
    scanf("%d",&fNo2);

    fRet = Division(fNo1,fNo2);
    printf("Division of two numbers is :%f\n",fRet);

    return 0;
}