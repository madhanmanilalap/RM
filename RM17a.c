#include<stdio.h>
#include<conio.h>
void main()
{
char a[25];
int b,i;
clrscr();
printf("Enter the string and no.of times to copy:");
scanf("%s%d",&a,&b);
for(i=0;i<b;i++)
{
printf("%s",a);
printf("\n");
}
getch();
}
