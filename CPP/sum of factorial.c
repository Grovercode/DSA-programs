#include<stdio.h>
int main()
{ int N,i,j;
float F=1,k=0;
printf("Enter a number");
scanf("%d",&N);
for(i=1;i<=N;i++)
{    F=1;
for(j=1;j<=i;j++)
F*=j;
k+=1/F;
}
printf("\n %f",k);
}