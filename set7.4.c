#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],b[100],i,j=0,temp,m;
    clrscr();
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(m=0;m<j;m++)
    {
        if(b[m]>b[m+1])
        {
            temp=b[m];
            b[m]=b[m+1];
            b[m+1]=temp;
        }
    }
    for(m=0;m<j;m++)
    {
        printf("%d ",b[m]);
    }
    getch();
}
