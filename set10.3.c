#include <stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i=0,j=i+1,k=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0,j=i+1;i<n-1,j<n;i+2,j+2)
   {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
