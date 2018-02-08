#include<stdio.h>
#include<conio.h>
void main()
{
int h1,m1,h2,m2,a,b;
clrscr();
printf("Enter the first Hours and Minutes:\n");
scanf("%d%d",&h1,&m1);
printf("Enter the second Hours and Minutes:\n");
scanf("%d%d",&h2,&m2);
a=h1-h2;
b=m1-m2;
printf("The Result is %d %d",a,b);
getch();
}
