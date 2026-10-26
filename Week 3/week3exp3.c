#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,A;
printf("enter the three sides length a,b,c:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area of the triangle is %f",A);
}