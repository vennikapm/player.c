#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,b,a[100],flag=0,i,j;
    clrscr();
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            m=a[i]+a[j];
            if(m==b)
            {
                flag++;
            }
        }
    }
    if(flag>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
getch();
}
    
