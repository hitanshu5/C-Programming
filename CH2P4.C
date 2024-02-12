#include<stdio.h>
#include<conio.h>
void main()
{
	float Prin,ROI,time,SI;
	clrscr();
	printf("enter principle amount, Rate of interest and time: ");
	scanf("%f%f%f", &Prin,&ROI,&time);
	SI= Prin*ROI*time/100 ;
	printf("simple interest is: %f\n",SI);
	getch();
}