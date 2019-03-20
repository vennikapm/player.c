#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    j=i+1;
    while(i<n-1)
    {
        if(a[j]%a[i]==0)
        {
            printf("%d ",a[j]);
        }
        j++;
        i++;
    }
    getch();
    }
