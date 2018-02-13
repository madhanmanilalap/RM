#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,b,i,j;
clrscr();
printf("Enter n value\n");
scanf("%d",&n);
printf("Enter The Elements of Array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
}}
printf("The Maximum Element:%d",a[n-1]);
getch();
}
