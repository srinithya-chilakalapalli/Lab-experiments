#include<stdio.h>
int main()
{
int units;
float bill;
printf("enter consumed units:");  
scanf("%d",&units);
  if(units<=100)
    {
    bill=units*1.50;
    }
  else if(units>100&&units<=200)  
    {
    bill=(100*1.50)+(units-100)*2.50;
    }
  else if(units>200&&units<=500)   
    {
    bill=(100*1.50)+(100*2.50)+(units-200)*4;
    }
  else
    {
    bill=(100*1.50)+(100*2.50)+(300*4)+(units-500)*6;
    }
  printf("the total bill amount is %f",bill);  
}