#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,j,count=0,temp=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
    count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
count++;
}
}
if(count==2)
{
temp++;
}

}
printf("\n%d",temp);
return 0;
}
