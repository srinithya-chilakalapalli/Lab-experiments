#include<stdio.h>
int main()
{
int a,b,n;
printf("enter a,b values:");
scanf("%d%d",&a,&b);
printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division:");
printf("\nenter the choosen type:");
scanf("%d",&n);
switch(n)
 {
   case 1:
          printf("the addition between a and b is %d",a+b);
          break;
   case 2:
          printf("the subtraction between a and b is %d",a-b);
          break;
   case 3:
          printf("the multiplication between a and b is %d",a*b);
          break;
   case 4:
          if(b!=0)
             printf("the division between a and b is %f",(float)a/b);
          else
             printf("division by zero is not possible");
          break;
   default:
          printf("invalid option");   
 }         
} 