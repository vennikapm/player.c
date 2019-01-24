#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int n,i,count=0;
clrscr();
printf("enter test");
scanf("%d",&n);
while(n>0)
{
printf("enter str");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
a[count]='.';
printf("%s",a);
n--;
}
getch();
}
