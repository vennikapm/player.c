#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,sum;
   clrscr();
   scanf("%d %d %d",&a,&b,&c);
   if(a!=0&&b!=0&&c!=0)
   {
       sum=a+b+c;
       if(sum==180)
       {
           printf("yes");
       }
       else
       {
           printf("no");
       }
   }
   else
   {
       printf("no");
   }
getch();
}
