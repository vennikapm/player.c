#include <stdio.h>
void main()
{
    int a[100],i,j,n,temp,t,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(k-1);i++)
    {
        for(j=i+1;j<=(k-1);j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=k;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
