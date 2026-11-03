#include<stdio.h>
#include<math.h>
int main(void)
{
  double a,b,c,d,r1,r2,realPart,imagPart;
  printf("Enter a, b and c:");
  scanf("%lf%lf%lf",&a,&b,&c);
  if(a==0){
    printf("Not a quadratic equation.\n");
    return 0;
  }
  d=b*b-4*a*c;
  if(d>0){
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("Roots are%.2lf and %.2lf\n",r1,r2);
  } else if(d==0){
    r1=-b/(2*a);
    printf("Equal roots=%.2lf\n",r1);
  } else{
    realPart=-b/(2*a);
    imagPart=sqrt(-d)/(2*a);
    printf("Roots are%.2lf+%.2lfi and%.2lf-%.2lfi\n",realPart,imagPart,realPart,imagPart);
  }
  return 0;
}  
