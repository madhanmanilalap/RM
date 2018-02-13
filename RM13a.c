#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,b=1;
clrscr();
printf("Enter the String:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
b++;
}
printf("No.Of Sentences : %d",b);
getch();
}
