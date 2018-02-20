#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
printf("Enter the value b:");
scanf("%d",&b);
a=a^b;b=b^a;a=a^b;
printf("Swap vaues\na:%d\nb:%d",a,b);
getch();
}
