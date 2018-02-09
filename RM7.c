#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,b=0;
clrscr();
printf("Enter The string :");
gets(a);
for(i=0;i<20;i++)
{
if(a[i] == ' ');
b++;
}
printf("No of spaces:%d",b);
getch();
}
