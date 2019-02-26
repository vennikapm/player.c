#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,c;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=2;i<b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
    getch();
}
