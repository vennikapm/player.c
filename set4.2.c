#include<stdio.h>
#include<conio.h>
void main()
{
    int b,i,n,count=0;
    int a[100];
    clrscr();
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }
    getch();
}
