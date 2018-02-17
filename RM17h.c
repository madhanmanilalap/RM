#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b,c,i,d=0;
clrscr();
printf("Enter the size:");
scanf("%d",&b);
printf("Enter the Elements of array:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
d=d+a[i];
}
c=d/b;
printf("Average:%d",c);
getch();
}
