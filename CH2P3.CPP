#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a number: ");
scanf("%d",&a);
b=a%2;
c=a%3;
printf("remainder when divided by 2= %d\n",b);
printf("remainder when divided by 3= %d\n",c);
getch();
}