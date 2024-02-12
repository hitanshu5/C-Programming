#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],size,i,pos;
clrscr();
printf("enter the number of elements ");
scanf("%d",&size);
printf("\nenter the position to delete element ");
scanf("%d",&pos);
if(pos<=size)
{
printf("\nfor elements of array ");
for(i=0;i<size;i++)
{
printf("\nenter a value ");
scanf("%d",&a[i]);
}
for(i=pos-1;i<size-1;i++)
{
a[i]=a[i+1];
}
printf("\nArray after deleting element\n");
for(i=0;i<size-1;i++)
{
printf("%d\n",a[i]);
}
}
else printf("\nposition is invalid");
getch();
}