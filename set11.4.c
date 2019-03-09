#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,sum=0,n,add=0,j;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<n,j<n;i++,j++)
    {
        sum=sum+a[i]+a[j];
    }
     printf("%d",sum);
    getch();
}
