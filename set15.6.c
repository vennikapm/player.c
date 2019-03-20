#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,fact1=1,fact2=1,ans;
    scanf("%d %d",&a,&b);
    while(a>0)
    {
        fact1=fact1*a;
        a--;
    }
    while(b>0)
    {
        fact2=fact2*b;
        b--;
    }
    ans=fact1/fact2;
    printf("%d",ans);
    getch();
    }
