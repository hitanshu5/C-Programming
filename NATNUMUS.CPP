#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
void natnum(int n);
clrscr();
printf("enter the number of natural numbers ");
scanf("%d",&n);
natnum(n);
getch();
}
void natnum(int n)
{
if(n==0)
return;
natnum(n-1);
printf("%d\n",n);
}