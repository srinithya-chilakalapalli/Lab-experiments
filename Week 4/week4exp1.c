#include<stdio.h>
int main()
{
float A,B,C,D,E,F,G,i,J,s,m,n;
printf("enterA,B,C,D,E,F,G,i values respectively:");
scanf("%f%f%f%f%f%f%f%f",&A,&B,&C,&D,&E,&F,&G,&i);
s=A+B*C+(D*E)+F*G;
m=A/B*C-B+A*D/3;
n=A+++B---A;
J=(i++)+(++i);
printf("\n1.%f\n2.%f\n3.%f\n4.%f",s,m,n,J);
}