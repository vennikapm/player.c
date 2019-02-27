#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[10];
    int i;
    clrscr();
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[0])
        {
            printf("%d",i+1);
            break;
        }
    }
    getch();
}
