#include<stdio.h>
int main(void)
{
    int n,i,isprime=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<2)
      isprime=0;
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime)
      printf("%d is a prime number.\n",n);
    else
      printf("%d is not a prime number.\n",n);
    return 0;
}