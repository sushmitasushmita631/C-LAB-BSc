#include<stdio.h>
int main(void)
{
    int a[10][10],b[10][10],c[10][10];
    int rows,cols,i,j;
    printf("Enter rows and columns:");
    scanf("%d%d",&rows,&cols);
    if(rows<1 || rows>10 || cols<1 || cols>10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }
    printf("Enter elements of matrix A:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&a[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            c[i][j]=a[i][j]+b[i][j];
    printf("Sum matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}