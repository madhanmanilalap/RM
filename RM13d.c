#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter The Value of a:");
scanf("%d",&a);
printf("Enter The Value of b:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("a:%d",a);
printf("b:%d",c);
getch();
}
