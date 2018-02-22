#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=1,b=0;
clrscr();
printf("Enter the number a:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
b++;
}}
if(b==2)
{
printf("Prime Number");
}
else
{
printf("Not prime number");
}
getch();
}
