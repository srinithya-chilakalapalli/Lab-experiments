#include<stdio.h>
int main()
{
int n;
float c,f;
printf("enter n balue=conversion type:\n1.fahrenheit to celsius\n2.celsius to fahrenheit:");
scanf("%d",&n);
   if(n==1)
   {
   printf("enter the temperature in fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*(5.0/9.0);
   printf("the temperature in celsius is %f",c);
   }
   else if (n==2)
   {
   printf("enter the temperature in celsius:");
   scanf("%f",&c);
   f=(c*9.0/5.0)+32;
   printf("the temperature in fahrenheit is %f",f);
   }
   else
   printf("invalid option");
}   