#include<stdio.h>

void Display(int n)
{
    int i = 0;
    for(i=1; i<=n; i++)
    {
        printf("Jay Ganesh\n");
    }
}
int main()
{
    int n = 0;
     
    printf("Enter value of N:\n");
    scanf("%d",&n);

    Display(n);

    return 0;
}