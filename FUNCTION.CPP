#include<stdio.h>
#include<conio.h>
void main()
{
float a,l,b,r,areasquare,arearectangle,areacircle;
float area1(float a);
float area2(float l,float b);
float area3(float r);
clrscr();
printf("enter the side of square\n ");
scanf("%f",&a);
areasquare = area1(a);
printf("Area of sqaure is %f\n",areasquare);
printf("enter the length and breadth of rectangle \n ");
scanf("%f %f",&l,&b);
arearectangle = area2(l,b);
printf("Area of rectangle is %f\n",arearectangle);
printf("enter the radius of circle \n ");
scanf("%f",&r);
areacircle = area3(r);
printf("Area of circle is %f\n",areacircle);
getch();
}
float area1(float a)
{
int A;
A=a*a;
return A;
}
float area2(float l,float b)
{
int B;
B=l*b;
return B;
}
float area3(float r)
{
int C;
C=3.14*r*r;
return C;
}

