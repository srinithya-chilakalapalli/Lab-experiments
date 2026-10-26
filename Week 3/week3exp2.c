#include<stdio.h>
#include<math.h>
int main()
{
float p,t,r,c;
printf("enter principle amount,time,rate of interest :\n");
scanf("%f%f%f",&p,&t,&r);
c=p*pow((1+(r/100)),t)-p;
printf("the compound interest value is %.2f",c);
}