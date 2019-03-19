#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100],k=0,count=0,i;
scanf("%d",&n);
while(k<n)
{
for(i=0;i<2;i++)
{
scanf("%d",&a[i]);
}
if(a[1]>a[0])
{
count++;
}
k++;
}
printf("%d",count);
getch();
}
