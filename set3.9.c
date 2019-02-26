#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,m,count=0,sum;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=i;
        for(j=0;j<m;j++)
        {
            sum=j*j;
            if(sum==m)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    getch();
}
