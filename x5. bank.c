//basic bank transactions
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1, n;
	float bb, d, wd;
	printf("Enter bank balance\n");
	printf("Rs. ");
	scanf("%f", &bb);
	while(i<=1)
	{
	printf("1: Withdraw\n2: Deposit\n");	
	 scanf("%d", &n);
		switch(n)
		{
			case 1:  printf("Enter amount to withdraw\n");
			     	 printf("Rs. ");
					 scanf("%f", &wd);
					 if(wd<bb)
					  {
					   bb=bb-wd;
					   printf("Transaction successful\n");
				      }
					 else
					  printf("Insufficient funds\n");
					 break;
			case 2:  printf("Enter amount to deposit\n");
					 printf("Rs. ");
					 scanf("%f", &d);
					 bb=bb+d;
					 printf("Transaction successful\n");
					 break; 		 
			default: printf("Invalid selection\n");
					 break;						
		}
	 printf("\nCurrent bank balance is Rs. %f\n", bb);
	 printf("Do you want to make another transaction?\n");
	 printf("1: Yes, 2: No\n");
	 scanf("%d", &i);
    }
	getch();
}
