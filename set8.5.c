#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a[100],i,j,count=0,n;
    clrscr();
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    getch();
}
