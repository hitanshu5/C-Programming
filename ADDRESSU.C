#include<stdio.h>
#include<conio.h>
struct address
{
int houseNo;
int block;
char city[100];
char state[100];
};
void Add(struct address add);

void main()
{
struct address adds[3];
clrscr();
printf("enter info for person1\n");
printf("houseNo ");
scanf("%d",&adds[0].houseNo);
printf("block ");
scanf("%d",&adds[0].block);
printf("city ");
scanf("%s",adds[0].city);
printf("state ");
scanf("%s",adds[0].state);

printf("enter info for person2\n");
printf("houseNo ");
scanf("%d",&adds[1].houseNo);
printf("block ");
scanf("%d",&adds[1].block);
printf("city ");
scanf("%s",adds[1].city);
printf("state ");
scanf("%s",adds[1].state);

printf("enter info for person3\n");
printf("houseNo ");
scanf("%d",&adds[2].houseNo);
printf("block ");
scanf("%d",&adds[2].block);
printf("city ");
scanf("%s",adds[2].city);
printf("state ");
scanf("%s",adds[2].state);

Add(adds[0]);
Add(adds[1]);
Add(adds[2]);
getch();
}

void Add(struct address add)
{
printf("address is %d, %d, %s, %s\n",add.houseNo,add.block,add.city,add.state);
}
