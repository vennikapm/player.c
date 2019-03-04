#include<stdio.h>
#include<conio.h>
void main()
{
int n,bin=0,rem,power=1;
clrscr();
scanf("%d",&n);
while(n>0)
{
rem=n%10;
bin=rem*power+bin;
n=n/10;
power=power*2;
}
printf("%d",bin);
getch();
}
