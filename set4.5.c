#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j,count=0;
    clrscr();
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%c",a[i]);
        }
    }
    getch();
}
