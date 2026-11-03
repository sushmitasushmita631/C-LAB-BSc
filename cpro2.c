#include<stdio.h>
int main(void)
{
  const float PI=3.14159f;
  float r,area,circumference;
  printf("Enter radius:");
  scanf("%f",&r);
  area=PI*r*r;
  circumference=2*PI*r;
  printf("Area=%.2f\n",circumference);
  return 0;
}