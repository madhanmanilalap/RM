#include<stdio.h>
#include<conio.h>
void main()
{
char a[25],b[25];
int i=0;
clrscr();
printf("Enter the string 1 and string 2:");
gets(a);
gets(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>b[i])
printf("%s",a);
else if(a[i]<b[i])
printf("%s",b);
else
printf("%s%s",a,b);
getch();
}
