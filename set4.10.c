#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,count=0,j;
   clrscr();
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=n;j++)
       {
       if((i*1)+(j*2)==n)
       {
           count++;
       }
       }
   }
   printf("%d",count);
}
    
