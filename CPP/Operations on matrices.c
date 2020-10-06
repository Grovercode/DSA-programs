#include <stdio.h>
#include <stdlib.h>

void read(int a[][100],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
}

void display(int a[][100],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
    printf("%5d",a[i][j]);
  printf("\n");
  }
}

void add(int a[][100],int b[][100],int m,int n)
{
 int i,j,c[100][100];
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    c[i][j]=a[i][j]+b[i][j];
 printf("Sum of matrix : \n");
 display(c,m,n);
}

void transpose(int a[][100],int m,int n)
{
 int i,j,c[100][100];
 for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    c[j][i]=a[i][j];

 display(c,n,m);
}

void multiply(int a[][100],int b[][100],int m1,int n1,int n2)
{
 int c[100][100],i,j,k;
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
 printf("Product of matrix : \n");
 display(c,m1,n2);
}

int main()
{ 
 int a[100][100],b[100][100],m1,n1,m2,n2,op;
  printf("Enter the size of the matrix A (row and column) : ");
  scanf("%d%d",&m1,&n1);
  printf("Enter Matrix A :\n");
  read(a,m1,n1);
  printf("Enter the size of the matrix B (row and column) : ");
  scanf("%d%d",&m2,&n2);
  printf("Enter Matrix B :\n");
  read(b,m2,n2);
  printf("Matrix A : \n");  
  display(a,m1,n1);
  printf("Matrix B : \n");  
  display(b,m2,n2);
 
while(1)
  {
   printf(" 1.Add \n 2.Multiply \n 3.Transpose \n 4.Exit \n");
   printf("Choose an option :");
   scanf("%d",&op);
   switch(op)
   {
    case 1: if(m1==m2 && n1==n2)
                   add(a,b,m1,n1);
                else
                   printf("Incompatable matrix.Cannot add\n");
                 break;
    case 2: if(n1==m2)
                   multiply(a,b,m1,n1,n2);
               else
                   printf("Incompatable matrix.Cannot mutliply\n");
                break;
    case 3: printf("Transpose of A : \n");
                transpose(a,m1,n1);
                printf("Transpose of B : \n");
                transpose(b,m2,n2);
                break;
    case 4: exit(0);
   } 
   }
}