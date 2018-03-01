#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("Enter the Number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
printf("%d",i);
}}
getch();
}
