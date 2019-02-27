#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[10];
    int i,count=0;
    clrscr();
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[0])
        {
            count++;
        
        }
    }
    printf("%d",count);
    getch();
}
