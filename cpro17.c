#include<stdio.h>
unsigned long long factorial(int n)
{
    if(n==0||n==1)
       return 1;
    return(unsigned long long)n*factorial(n-1);
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