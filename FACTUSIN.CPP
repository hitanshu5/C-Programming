#include<stdio.h>
#include<conio.h>
void main ()
{
int n,fact;
int facto (int n);
clrscr();
printf("enter a number ");
scanf("%d",&n);
fact=facto(n);
printf("factorial is %d",fact);
getch();
}
int facto (int x)
{
if (x==0) return 1;
else return (x*facto(x-1));
}