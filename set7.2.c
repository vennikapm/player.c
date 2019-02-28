#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,c;
    clrscr();
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c=n/i;
            if(c%2!=0)
            {
                printf("%d",i);
                break;
            }
        }
    }
    getch();
}
