#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
while(a!=0)
{
if(a%10==0)
{
printf("%d",a);
break;
}
a++;
}
getch();
}
