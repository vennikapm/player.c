#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int n,i,j=0,count=0;
clrscr();
scanf("%d",&n);
while(n>0)
{
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>=0;i--)
{
b[j]=a[i];
j++;
}
printf("%s",b)
}
n--;
}
getch();
}
