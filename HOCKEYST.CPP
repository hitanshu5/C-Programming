#include<stdio.h>
#include<conio.h>
int strcompare(char a[100], char b[100])
{
int i=0;
while(a[i]!=0)
{
if(a[i]!=b[i]) return(a[i]-b[i]);
i++;
}
return (a[i]-b[i]);
}
struct hockey
{
char name[20],country[20];
int matches,goals;
};
void main()
{
struct hockey h[100],temp;
int i,j,n;
clrscr();
printf("enter the number of players ");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
printf("enter name,country,matches and goals ");
scanf("%s %s %d %d",&h[i].name,&h[i].country,&h[i].matches,&h[i].goals);
}
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-2;j++)
{
if(strcompare(h[j].name,h[j+1].name)>0)
{
temp=h[j];
h[j]=h[j+1];
h[j+1]=temp;
}
}
}
printf("list according to name \nName\tCountry\tmatches\tgoals\n");
for(i=0;i<=n-1;i++)
{
printf("%s\t%s\t%d\t%d\n",h[i].name,h[i].country,h[i].matches,h[i].goals);
}
getch();
}
