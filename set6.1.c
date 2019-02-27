#include <stdio.h>
#include<conio.h>
void main()
{
    int a[100],smin,min,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     }

    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    smin=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smin&&a[i]>min)
        {
            smin=a[i];
        }
    }
    printf("%d",smin);
    getch();
}
