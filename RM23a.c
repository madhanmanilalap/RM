#include<stdio.h>
#include<conio.h>
void main()
{
char a[25];
int b;
clrscr();
printf("Enter the String:");
gets(a);
b=strrev(a);
if(b==a)
{
printf("%s is Palindrome",a);
}
else
printf("%s is not Palindrome",a);
getch();
}
