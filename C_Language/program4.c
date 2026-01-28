#include<stdio.h>

float Division(float iValue1, float iValue2)
{
    float iAns = 0.0f;
    iAns = iValue1 / iValue2;
    return iAns;
}
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fNo1);

    printf("Enter second number :\n");
    scanf("%f",&fNo2);

    fRet = Division(fNo1,fNo2);
    printf("Division of two numbers is :%f\n",fRet);

    return 0;
}