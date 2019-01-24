#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num,fact=1;
clrscr();
printf("enter testcase");
scanf("%d",&n);
while(n>0)
{
printf("enter num");
scanf("%d",&num);
for(i=num;i>0;i--)
{
fact=fact*i;
}
printf("%d",fact);
n--;
}
getch();
}
