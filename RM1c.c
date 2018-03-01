#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the Two Numbers:");
scanf("%d%d",&a,&b);
printf("Enter the Number to be check:");
scanf("%d",&c);
if(c>a && c<b)
{
printf("Yes");
}
else
printf("No");
getch();
}
