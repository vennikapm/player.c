#include<stdio.h>
#include<math.h>
void main()
{
   int n;
   float res;
   scanf("%d",&n);
   res=sin(n*3.14/180);
   printf("%0.1f",res);
   getch();
}
