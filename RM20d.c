#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
if(a%2==0)
{
printf("%d",a);
}
else
printf("%d",a-1);
getch();
}
