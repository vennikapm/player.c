#include <stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],n,i,j,flag=0;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(a[i]==b[j])
        {
            flag++;
        }
    }
    if(flag==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
