#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b,c,i,j;
clrscr();
printf("Enter the size:");
scanf("%d",&b);
printf("Enter the Elemets of array:\n");
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
printf("The Minimum value:%d \n The maximum value :%d",a[0],a[b-1]);
getch();
}
