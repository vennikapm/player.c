#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,j,flag=0;
    clrscr();
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]==b[i]+32)||(a[i]==b[i]-32)||a[i]==b[i])
        {
            flag++;
        }
    }
    if(flag==i)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
