#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[20];
int roll;
};
void main()
{
struct student a;
clrscr();
printf("enter name and roll no ");
scanf("%s %d",&a.name,&a.roll);
printf("Student name %s\nRoll no. %d",a.name,a.roll);
getch();
}