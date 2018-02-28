#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,j,c=0,d=0;
clrscr();
printf("Enter the string:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
j=c-1;
for(i=0;a[i]!='\0';i++)
{
b[j]=a[i];
j--;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
d++;
}
if(d==c)
printf("Yes");
else
printf("No");
getch();
}
