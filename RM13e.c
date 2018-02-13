#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter The Value of a:");
scanf("%d",&a);
printf("Enter The Value of b:");
scanf("%d",&b);
a=a^b;
b=b^a;
a=a^b;
printf("a:%d",a);
printf("b:%d",b);
getch();
}
