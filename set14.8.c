#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,f;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        if(pow(2,i)==n)
        {
            f=1;
            break;
        }
        else
        {
            f=0;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
