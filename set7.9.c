#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,a[100],i,t=0;
clrscr();
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-m;i++)
{
    printf("%d ",a[i]);
}
getch();
}
