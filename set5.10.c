#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }
    getch();
}
