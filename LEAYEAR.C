#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
void LP(int yr);
clrscr();
printf("enter a year ");
scanf("%d", &yr);
LP(yr);
getch();
}
void LP(int yr)
{
if((yr%4==0) && (yr%100!=0))
printf("leap year");
else if(yr%400==0)
printf("century leap year");
else
printf("not a leap year");
}
