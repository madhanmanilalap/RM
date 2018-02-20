#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b,i,j,c;
clrscr();
printf("Enter the size of array:");
scanf("%d",&b);
printf("Enter the Elements:\n");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}}}
printf("Maximum Value:%d",a[b-1]);
getch();
}
