#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,bin,count=0,power=1;
clrscr();
scanf("%d",&n);
while(n>0)
{
    rem=n%2;
    bin=bin+rem*power;
    n=n/2;
    count++;
    power=power*10;
}
printf("%d",count);
getch();
}
