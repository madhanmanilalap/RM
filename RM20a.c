#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
printf("%d\n",b);
a/=10;
}
getch();
}
