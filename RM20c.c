#include<stdio.h>
#include<conio.h> 
void main()
{
int a,b,c=0;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c=c+b;
a/=10;
}
printf("Sum:%d",c);
getch();
}
