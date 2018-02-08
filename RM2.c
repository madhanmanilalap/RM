#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,b;
clrscr();
printf("Enter the size of array:\n");
scanf("%d",&b);
printf("Enter the Elements of array:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
printf("The index of\n");
for(i=0;i<b;i++)
{
printf("%d is %d\n",a[i],i);
}
getch();
}



