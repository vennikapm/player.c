#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],b[100],i,j,n,m,k=0,temp;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=n;i<n+m;i++)
    {
     a[i]=b[k];
     k++;
    }
    for(i=0;i<n+m;i++)
    {
        for(j=0;j<n+m;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
