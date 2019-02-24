#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
getch();
}
