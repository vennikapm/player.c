#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],min,n,rem,i,r,j,k,count=0,t=0;
    clrscr();
    scanf("%d %d",&n,&k);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            t++;
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    a[i]='&';
                    count++;
                }
            }
        }
        
    }
    if(t==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
        printf(" %d",count);
    }
    getch();
}
