#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],b[100],i,j;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
              printf("%d ",a[i]); 
              b[j]='&';
              break;
            }
        }
    }
    getch();
}
