#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the integer :");
scanf("%d",&a);
b=(a & (a-1));
if(b==0)
printf("%d is power of 2",a);
else
printf("%d is not power of 2",a);
getch();
}
