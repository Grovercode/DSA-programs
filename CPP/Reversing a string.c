#include <stdio.h> #include <string.h>
void reversestring(char str[])
{
int i,n; char temp;
n=strlen(str); for(i=0;i<n/2;i++)
{
temp=str[i]; str[i]=str[n-i-1];
str[n-i-1]=temp;
}
}
void main()
{
char str[100]; 
printf("Enter the string :");
scanf("%[^\n]",str); reversestring(str);
printf("String after reversing is %s\n",str);
}
