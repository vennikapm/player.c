#include <stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i=0,p,k=0,temp,c;
    scanf("%s %d %d",a,&p,&k);
    c=p+k;
    for(i=0;a[i]!='\0';i++)
    {
        if(i==c-1)
        {
            printf("%c",a[i]);
            break;
        }
    }
    getch();
}
