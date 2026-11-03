#include<stdio.h>
int main(void)
{
    int a[100],n,key,i,position=-1;
    printf("Enter number of elements:");
    scanf("%d",&n);
    if(n<1||n>100){
        printf("Invalid array size.\n");
        return 0;
    }
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]==key){
        position=i;
            break;
        }
    }
    if(position!=-1)
      printf("Element found at position%d.\n",position+1);
    else
      printf("Element not found.\n");
    return 0;
}