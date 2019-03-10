#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,j,count=0,b;
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]=='a')||(a[i]=='b'))
        {
            count++;
        }
    }
    if((count==i)||(count==i-1))
    {
        printf("yes");
        }
        else
        {
            printf("no");
            }
            getch();
}
