#include<iostream.h>
#include<conio.h>
class circle
{
float x,y,r,ar,c;
public:
cirle()
{
x=y=0.0;
r=1.0;
}
getdata()
{
cout<<"enter the values of x,y and r"<<endl;
cin>>x>>y>>r;
}
area()
{
ar=3.14*r*r;
cout<<"area is "<<ar<<endl;
}
circumference()
{
c=2*3.14*r;
cout<<"circumference is"<<c<<endl;
}
print1()
{
cout<<"x and y intercept of the center of circle"<<x<< " "<<y <<endl;
}
print2()
{
cout<<"the radius of the given circle is"<<r<<endl;
cout<<"the area of the given circle is"<<ar<<endl;
cout<<"the circumference of the given circle is"<<c<<endl;
}
};
void main()
{
clrscr();
circle c;
int opt;
cout<<"\n what values do you want?"<<"\n 1.default values. \n 2.user defined values."<<"\n Enter your choice";
cin>>opt;
switch(opt)
{
case 1:
c.getdata();
c.print1();
break;
case 2:
c.getdata();
c.area();
c.circumference();
c.print2();
break;
}
getch();
}

/*output


 what values do you want?                                                       
 1.default values.                                                              
 2.user defined values.                                                         
 Enter your choice2                                                             
enter the values of x,y and r                                                   
3 4 5                                                                           
area is 78.5                                                                    
circumference is31.4
the radius of the given circle is5                                              
the area of the given circle is78.5                                             
the circumference of the given circle is31.4                                    

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
