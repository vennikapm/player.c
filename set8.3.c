#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i,k;
    clrscr();
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if((a[i]-a[i+1]==1)||(a[i]-a[i+1]==-1))
        {
           if(a[i]==k)
           {
               printf("%d ",i+1);
           }
           if(a[i+1]==k)
           {
               printf("%d ",i+2);
               a[i+1]='&';
           }
        }
    }
    getch();
}
