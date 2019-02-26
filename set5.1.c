#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i,flag=0,a;
    clrscr();
    scanf("%d %d",&n,&a);
    for(i=0;i<100;i++)
    {
        if(n==pow(a,i))
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
