#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,j,k,count=0;
    clrscr();
    scanf("%s",a);
    scanf("%s",b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++)
    {
        
            if(a[i]!=b[i])
            {
                count++;
            }
        
    }
    if(count==k)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    getch();
}
