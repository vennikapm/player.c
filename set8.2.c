#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("%d",a[i]);
        }
    }
    getch();
}
