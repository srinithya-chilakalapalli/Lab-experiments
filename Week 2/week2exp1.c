#include<stdio.h>
int main()
{
float a,b,c,sum,avg;
printf("enter three values:");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("%f is the sum and %f is average",sum,avg);
}