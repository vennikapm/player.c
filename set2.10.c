#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]+3;
    }
    printf("%s",a);
    getch();
}
