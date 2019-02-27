#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,i,k,b,j;
    clrscr();
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        b=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=b;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
