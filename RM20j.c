#include<stdio.h>
#include<conio.h>
void main()
{
int f1=1,f2=0,f3,i,n;
clrscr();
printf("Enter the value n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
f3=f1+f2;
printf("%d",f3);
f1=f2;
f2=f3;
}
getch();
}
