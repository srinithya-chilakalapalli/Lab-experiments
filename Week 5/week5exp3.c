#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
float r1,r2;
printf("enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-4*a*c;
  if(d==0)
  {
  r1=-b/(2*a);
  r2=-b/(2*a);
  printf("the root 1 is %f",r1);
  printf("\nthe root 2 is %f",r2);
  }
  else if(d>0)
  {
  r1=(-b-sqrt(d))/(2*a);
  r2=(-b+sqrt(d))/(2*a);
  printf("the root 1 is %f",r1);
  printf("\nthe root 2 is %f",r2);
  }
  else
  printf("the roots are imaginary");
} 