#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,i,sum=0;
    clrscr();
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem%2!=0)
        {
            sum=sum+rem;
        }
        n=n/10;
    }
    if(sum%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
    getch();
}
