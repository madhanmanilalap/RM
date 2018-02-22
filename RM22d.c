#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
printf("Enter the value b:");
scanf("%d",&b);
c=a+b;
if(c%2!=0)
{
printf("Odd");
}
else
printf("Even");
getch();
}
