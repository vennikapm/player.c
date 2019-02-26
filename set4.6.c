#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,count=0,rem;
    clrscr();
    scanf("%d %d",&n,&a);
    if(a>=0&&a<=9)
    {
    while(n>0)
    {
        rem=n%10;
        if(rem==a)
        {
            count++;
        }
        n=n/10;
    }
    }
    printf("%d",count);
    getch();
}
