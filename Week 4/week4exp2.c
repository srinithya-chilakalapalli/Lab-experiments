#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
max=((a>b&&a>c)?a:((b>c)?b:c));
printf("the maximum value is %d",max);
return 0;
}