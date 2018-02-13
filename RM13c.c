#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,c=0;
clrscr();
printf("Enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9'
|| a[i]>='A' && a[i]<='Z'
|| a[i]>='a' && a[i]<='z'
|| a[i]==' ' && a[i]=='.')
c++;
}
printf("No.Of Special characters are:%d",c);
getch();
}
