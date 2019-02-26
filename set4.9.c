#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,flag=0;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<100;i++)
    {
        if(n==pow(2,i))
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
getch();
}
