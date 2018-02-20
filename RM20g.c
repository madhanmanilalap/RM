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
c=a;
a=b;
b=c;
printf("Swap values a:%d \n b:%d",a,b);
getch();
}
