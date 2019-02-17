#include <stdio.h>
#include <conio.h>
void main()
{
    char a[100],b[100];
    int i;
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
        {
            b[i]=a[i+1];
        }
        else
        {
            b[i]=a[i-1];
        }
    }
    b[i]='\0';
    printf("%s",b);
    
    
     getch();
}
