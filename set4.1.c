#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,count=0;
    clrscr();
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]=='(')
        {
            count++;
        }
        if(a[i]==')')
        {
            count--;
        }
    }
    if(count==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
