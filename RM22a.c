#include<stdio.h>
#include<conio.h>
void main()
{
char a[25];
int b,c,i;
clrscr();
printf("Enter the String and No of times to print:");
scanf("%s%d",&a,&b);
for(i=0;i<b;i++)
{
printf("%c",a[i]);
}
getch();
}
