#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,count=0;
clrscr();
while(count!=10)
{
if(i%5==0 && i%8==0)
{
printf("%d\n",i);
count++;
}
i++;
}
getch();
}
