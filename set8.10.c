#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n,j,max=0,diff,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    diff=a[1]-a[0];
    printf("%d",diff);
    getch();
}
