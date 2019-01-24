#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,rem,rev=0;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
printf("enter num");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("%d",rev);
n--;
}
getch();
}
