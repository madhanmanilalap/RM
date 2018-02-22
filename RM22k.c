#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,c=0,b=1,p=2;
clrscr();
printf("Enter the value a:");
scanf("%d",&a);
while(a!=1)
{
a=a/2;
c++;
}
for(i=0;i<c+1;i++)
{
b=b*p;
}
printf("%d",b);
getch();
}
