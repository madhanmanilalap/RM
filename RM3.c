#include<stdio.h>
#include<conio.h>
void main()
{
int a,h,m;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
h=a/60;
m=a%60;
printf("Hours:%d\n Minutes:%d",h,m);
getch();
}
