#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int fibo(int i);
clrscr();
printf("enter no. of elements ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",fibo(i));
}
getch();
}
int fibo (int i)
{
if(i==1) return 0;
if(i==2) return 1;
else return(fibo(i-1)+fibo(i-2));
}