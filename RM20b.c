#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
while(a!=0)
{
b=(b*10)+(a%10);
a/=10;
}
while(b!=0)
{
switch(b%10)
{
case 0:
printf("Zero");
break;
case 1:
printf("One");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
case 4:
printf("Four");
break;
case 5:
printf("Five");
break;
case 6:
printf("Six");
break;
case 7:
printf("Seven");
break;
case 8:
printf("Eight");
break;
case 9:
printf("Nine");
break;
}
b=b/10;
}
getch();
}
