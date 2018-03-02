#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i;
clrscr();
printf("Enter the Alphanumeric string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
printf("%c",a[i]);
}}
getch();
}
