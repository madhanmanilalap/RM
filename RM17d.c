#include<stdio.h>
#include<conio.h>
void main()
{
int b;
clrscr();
printf("Enter the number to check:");
scanf("%d",&b);
if(b>=0 && b<=9)
printf("Yes");
else
printf("No");
getch();
}
