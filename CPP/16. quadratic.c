//quadratic
#include<stdio.h>
#include<conio.h>
#include<math.h>
void quadratic(int, int, int);
void main()
{
	float a, b, c;
	printf("Enter coefficients of x^2, x and constant\n");
	scanf("%f%f%f", &a, &b, &c);
	printf("Equation is %fx^2 + %fx + %f\n", a, b, c);
	quadratic(a, b, c);
	getch();
}
void quadratic(int a, int b, int c)
{
	float D, r1, r2, m, s;
	D=((b*b)-(4*a*c));
	if(D>0)
	{
		printf("The roots are real and distinct\n");
		r1=(-b+pow(D, 0.5))/(2*a);
		r2=(-b-pow(D, 0.5))/(2*a);
		printf("The roots are %f and %f", r1, r2);
	}
	else
	 if(D==0)
	 {
		 printf("The roots are real and equal\n");
		 r1=(-b)/(2*a);
		 r2=r1;
		 printf("The roots are %f and %f", r1, r2);
	 }
	 else
	  {
	  	D=-D;
	  	printf("The roots are imaginary\n");
	  	m=(-b)/(2*a);
	  	s=(pow(D, 0.5))/(2*a);
	  	printf("The roots are %f+i%f and %f-i%f", m, s, m, s);
	  }
}
