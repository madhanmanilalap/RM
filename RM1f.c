#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("Enter the Number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
b++;
break;
}}
if(b==2)
{
printf("Yes.Composite");
}
else
printf("No");
getch();
}
