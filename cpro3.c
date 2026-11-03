#include<stdio.h>
int main(void)
{
  int choice;
  float temp,result;
  printf("1.Celsius to Fahrenheit\n");
  printf("2.Fahrenheit to Celsius\n");
  printf("Enter your choice:");
  scanf("%d",&choice);
  printf("Enter temperature:");
  scanf("%f",&temp);
  if(choice==1){
    result=(temp*9.0f/5.0f)+32.0f;
    printf("Fahrenheit=%.2f\n",result);
  }else if (choice==2){
    result=(temp-32.0f)*5.0f/9.0f;
    printf("celsius=%.2f\n",result);
  }else{
    printf("Invaild choice.\n");
  }
  return 0;
}