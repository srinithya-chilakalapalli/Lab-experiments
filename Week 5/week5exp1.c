#include<stdio.h>
int main()
{
int a,b,c,d,max,min;
printf("enter 4 numbers a,b,c,d:");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=a;
min=a;
  if(max<b)
    max=b;
  if(max<c)  
    max=c;
  if(max<d)  
    max=d;
  if(min>b)  
    min=b;
  if(min>c)  
    min=c;
  if(min>d)  
    min=d;
  printf("\nthe max number is %d",max);  
  printf("\nthe min number is %d",min);
}