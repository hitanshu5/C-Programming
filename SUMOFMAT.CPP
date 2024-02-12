#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j,m,n,sum[10][10];
clrscr();
printf("enter the number of rows and column ");
scanf("%d %d",&m,&n);
printf("MATRIX A\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("enter a value ");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("MATRIX B\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("enter a value ");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
sum[i][j] = a[i][j] + b[i][j];
}
}
printf("SUM MATRIX\n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
getch();
}