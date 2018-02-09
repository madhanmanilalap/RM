#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[200];
int i,b=0;
clrscr();
printf("Enter The String:");
gets(a);
for(i=0;a[i]!= '\0';i++)
{
if(a[i] == ' ')
b++;
}
printf("The count of Word:%d",b+1);
getch();
}
