#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch=65;
int i,j;
for(i=1;i<=5;i++)
{
for(j=0;j<i;j++)
{
printf("%c",ch+j);
}
printf("\n");
}
getch();
}