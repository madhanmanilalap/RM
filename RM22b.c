#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,b,c=0;
clrscr();
printf("Enter the String:");
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{
if(a[i]=='1' ||  a[i]=='0')
{
c=1;
}
else
c=0;
}
if(c==1)
{
printf("Yes");
}
else
printf("No");
getch();
}
