#include<stdio.h>
#include<conio.h>
void main()
{
char a[25];
int i,b=1;
clrscr();
printf("Enter the String:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
b=b+1;
}}
printf("No of Sentences:%d",b);
getch();
}
