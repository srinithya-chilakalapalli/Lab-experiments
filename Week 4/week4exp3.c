#include<stdio.h>
int main()
{
int a,b,c,d,e,total;
float avg;
printf("enter 5 subject marks:");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
avg=total/5;
printf("the total of 5 subjects is %d",total);
printf("\nthe average is %f",avg);
}