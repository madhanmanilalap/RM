#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,b=0;
clrscr();
printf("Enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
b++;
}
printf("NO.Of Characters:%d",b);
getch();
}
