#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,choice;
clrscr();
printf("enter your choice ");
scanf("%d",&choice);
printf("enter the value of n ");
scanf("%d",&n);
if(choice==1)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
if(choice==2)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=i-1;j++)
{
printf(" ");
}
for(j=1;j<=n+1-i;j++)
{
printf("*");
}
printf("\n");
}
}
if(choice==3)
{
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
printf("\n");
}
}
getch();
}