#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];    
int i;
clrscr();
printf("Enter the value:");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]%2!=0)
{
printf("%c",a[i]);
}}
getch();
}
