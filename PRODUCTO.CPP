#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m,n,p,a[10][10],b[10][10],c[10][10];
clrscr();
printf("Matrix A");
printf("enter number of rows and column ");
scanf("%d %d",&m,&n);
for(i=0;i<=m-1;i++)
{
for(j=0;j<=n-1;j++)
{
printf("enter a value ");
scanf("%d",&a[i][j]);
}
}
printf("Matrix B");
printf("enter the number of column ");
scanf("%d",&p);
for(i=0;i<=n-1;i++)
{
for(j=0;j<=p-1;j++)
{
printf("enter a value ");
scanf("%d",&b[i][j]);
}
}
for(i=0;i<=m-1;i++)
{
for(j=0;j<=p-1;j++)
{
c[i][j]=0;
for(k=0;k<=n-1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf(" product matrix is \n");
for(i=0;i<=m-1;i++)
{
for(j=0;j<=p-1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}






















