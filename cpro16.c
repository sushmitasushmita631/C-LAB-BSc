#include<stdio.h>
unsigned long long factorial(int n)
{
    int i;
    unsigned long long fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;
}
int main(void)
{
    int n;
    printf("Enter a non-negative integer:");
    scanf("%d",&n);
    if(n<0)
       printf("Factorial is not defined for negative numbers.\n");
    else
       printf("%d!=%llu\n",n,factorial(n));
    return 0;
}