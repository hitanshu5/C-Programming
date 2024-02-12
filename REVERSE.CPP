#include<stdio.h>
#include<conio.h>
void reverse(int a[100],int n)
{
int temp,i;
for(i=0;i<=(n-1)/2;i++)
{
temp=a[n-1-i];
a[n-1-i]=a[i];
a[i]=temp;
}
}
void main()
{
int n,i,a[100];
clrscr();
printf("enter number of elements ");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("enter a value ");
scanf("%d",&a[i]);
}
reverse(a,n);
printf("Reverse Array \n");
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
getch();
}

