#include <stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,m,count=0,k=0;
    scanf("%d %d",&n,&m);
    while(k<n)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&a[i]);
        }
        if(a[1]==m&&a[1]>a[0])
        {
            count++;
        }
        k++;
    }
    if(count>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
