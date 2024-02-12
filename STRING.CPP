#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n=0,countv=0,countc=0,countb=0,countd=0;
clrscr();
printf("enter a string ");
gets(a);
while(a[n]!=0)
{
n++;
}
for(i=0;i<=n-1;i++)
{
if(a[i]==' ')
countb++;
else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
countv++;
else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
countc++;
else if(a[i]>='0' &&  a[i]<='9')
countd++;
}
printf("%d vowels\n%d consonants\n%d digits\n%d spaces\n%d words\n",countv,countc,countd,countb,countb+1);
getch();
}
