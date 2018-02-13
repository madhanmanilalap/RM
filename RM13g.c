#include<stdio.h>
#include<conio.h>
void main()
{
int f1=-1,f2=1,f3,n,i;
clrscr();
printf("Enter the size n:");
scanf("%d",&n);
printf("The Fibanaci Series:");
for(i=0;i<n;i++)
{
f3=f1+f2;
printf("%d",f3);
f1=f2;
f2=f3;
}
getch();
}



