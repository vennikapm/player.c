#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i;
    clrscr();
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=95)
        {
            a[i]=a[i]-32;
        }
        else
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
    getch();
}
