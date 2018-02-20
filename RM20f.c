#include<stdio.h>
#include<conio.h>
void main()
{
int b,i;    
int k=0,j=0;
char a[20];
clrscr();
printf("Enter the string:");
scanf("%c",&a[i]);
b=strlen(a);
for(i=0;i<b;i++)
{
if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='B'))
{
k=1;
}
if(a[i]>='0' && a[i]<='9')
{
j=1;
}}
if(k==1 && j==1)
printf("Yes");
else
printf("No");
getch();
}
