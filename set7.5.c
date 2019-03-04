#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<n)
{
printf("%d ",a[i]);
}
}
getch();
}
