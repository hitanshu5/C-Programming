
#include<iostream.h>
#include<conio.h>

long int factorial(int a);
void main()
{
int a;
long int ans;
clrscr();
cout<<"enter a number"<<endl;
cin>>a;

ans=factorial(a);
cout<<"factorial is "<<ans<<endl;
getch();
}

long int factorial (int a)
{
int i;
long int f=1;
for(i=1;i<=a;i++)
{
f=f*i;
}
return f;
}