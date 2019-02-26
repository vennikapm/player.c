#include <stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,k,count=0;
    clrscr();
    scanf("%s",a);
    for(k=0;a[k]!='\0';k++);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
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
