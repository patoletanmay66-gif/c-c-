#include<stdio.h>
void main()
{
int hours,seconds;
clrscr();
printf("Enter hours:");
scanf("%d",&hours);
seconds=hours*60*60;
printf("The conversion is :%d",seconds);
getch();
}