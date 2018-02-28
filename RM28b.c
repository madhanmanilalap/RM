#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,b,c=0;
clrscr();
printf("Enter the size of string:");
scanf("%d",&b);
printf("Enter the string:");
scanf("%s",a);
for(i=0;i<b;i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') 
printf("Yes");
c=1;
}
if(c==0)
printf("No");
getch();
}
