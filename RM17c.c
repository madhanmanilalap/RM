#include<stdio.h>
#include<conio.h>
void main()
{
char a[25],b[25];
int i=0,j=0;
clrscr();
printf("Enter the string 1 and string 2:");
gets(a);
gets(b);
while(a[i]!='\0')
i++;
while(b[j]!='\0')
{
a[i]=b[j];
i++;
j++;
}
a[i]='\0';
printf("Concatenated String :%s",a);
getch();
}
