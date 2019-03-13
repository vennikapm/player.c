#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,a[100],count=0,i,j;
    clrscr();
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==k)
        {
            printf("%d",a[i]);
            break;
        }
    }
    getch();
}
    
