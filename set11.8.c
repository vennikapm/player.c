#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,j,n;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        a[i]=a[i-1]+a[i];
    }
     for(i=0;i<n;i++) 
     {
         printf("%d ",a[i]);
     }
    getch();
}
