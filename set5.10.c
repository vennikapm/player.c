#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,flag=0;
    clrscr();
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            
                flag++;
            }
        
    }
    if(flag>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
