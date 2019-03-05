#include<stdio.h>
#include<conio.h>
void main()
{
    int i,rem,a,b,sum=0;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
   printf("%d",sum);
        
    getch();
}
