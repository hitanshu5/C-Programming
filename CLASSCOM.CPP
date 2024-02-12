#include<iostream.h>
#include<conio.h>
class complex
{
private:
float r,im;
clrscr();
public:
void getdata()
{
cout<<"enter real number,imaginary number"<<endl;
cin>>r>>im;
}
void displaydata()
{
cout<<r<<" "<<im<<endl;
}
};
void main()
{
complex c1,c2;

c1.getdata();
c2.getdata();
c1.displaydata();
c2.displaydata();
getch();
}
