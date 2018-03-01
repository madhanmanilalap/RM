#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int i,b;
clrscr();
printf("Enter the string:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
b++;
}
if(b%2==0)
{
a[b/2]='*';
a[(b/2)-1]='*';
}
else
{
a[b/2]='*';
}
printf("%s",a);
getch();
}
