#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=0;
clrscr();
printf("Enter the integer a:");
scanf("%d",&a);
while(a!=0)
{
a/=10;
i++;
}
printf("No of intergers:%d",i);
getch();
}
