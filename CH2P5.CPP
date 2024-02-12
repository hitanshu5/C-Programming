#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,DA,HRA,gross;
	clrscr();
	printf("enter basic salary: ");
	scanf("%f",&basic);
	DA= 0.5*basic;
	HRA= 0.4*(basic+DA);
	gross=basic+DA+HRA;
	printf("Basic=%f\nDA=%f\nHRA=%f\ngross=%f",basic,DA,HRA,gross);
	getch();
}
