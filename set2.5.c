#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,count=0,t=0,flag;
clrscr();
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]==a[j])
{
count++;
}
}
if(count>t)
{
t=count;
flag=a[i];
}
count=0;
}
printf("%c",flag);
getch();
}
