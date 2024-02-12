#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i,n=0;
clrscr();
printf("enter a string ");
gets(a);
while(a[n]!=0)
{
n++;
}
for(i=0;i<=n-1;i++)
{
b[n-1-i]=a[i];
}
b[i]=0;
for(i=0;i<=n-1;i++)
{
if (a[i]!=b[i]) break;
}
if (n==i) printf("pallindrome");
else printf("not a pallindrome");
getch();
}
