#include<stdio.h>
#include<conio.h>
void main()
{
 int n,m,fact1=1,fact2=1,num,dem,t,i;
 scanf("%d %d",&n,&m);
 for(i=n;i>0;i--)
 {
     fact1=fact1*i;
 }
 for(i=m;i>0;i--)
 {
     fact2=fact2*i;
 }
 if(fact1>fact2)
 {
     num=fact1;
     dem=fact2;
 }
 else
 {
     num=fact2;
     dem=fact1;
 }
 while(dem!=0)
 {
     t=dem;
     dem=dem%num;
     num=t;
 }
 printf("%d",num);
}
