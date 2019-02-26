#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i;
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ')
        {
                a[i]='&';
        }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='&')
        {
         printf("%c",a[i]);
        }
    }
    getch();
    
}
