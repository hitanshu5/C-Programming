#include<stdio.h>
#include<conio.h>
void main()
{
	float km,m,feet,cm,inch;
	clrscr();
	printf("enter the distance in km: ");
	scanf("%f",&km);
	m=km*1000;
	feet=km/3280.84;
	cm=km*100000;
	inch=feet*12;
	printf("distance in km=%f\nmeter=%f\nfeet=%f\ncm=%f\ninch=%f\n",km,m,feet,cm,inch);
	getch();
}