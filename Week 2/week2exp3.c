#include<stdio.h>
int main()
{
float p,t,r,s;
printf("enter principle amount,time and rate of interest :");
scanf("%f%f%f",&p,&t,&r);
s=(p*t*r)/100;
printf("the simple interest is %f",s);
}