#include<stdio.h>
#include<conio.h>
void main()
{
int n,bin=0,rem,power=1;
clrscr();
scanf("%d",&n);
while(n>0)
{
rem=n%2;
bin=rem*power+bin;
n=n/2;
power=power*10;
}
printf("%d",bin);
getch();
}
