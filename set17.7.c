#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,j,count=0,f;
    clrscr();
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            i++;
        }
    }
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            f++;
        }
    }
    if(f==1)
    {
    printf("yes");
}
else
{
    printf("no");
}


    getch();
}
