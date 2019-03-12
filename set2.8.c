#include <stdio.h>
#include<conio.h>
void main()
{ 
char n,a[100],i,j,b[6]={'k','a','b','a','l','i'},count=0,k=0,c=0;
clrscr();
scanf("%d",&n);
while(k<n)
{
    scanf("%s",a);
    count=0;
    for(i=0;i<=5;i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j])
            {
                count++;
                a[j]='&';
            }
        }
    }
    if(count==i)
    {
        c++;
    }
    k++;
}
printf("%d",c);
getch();
}

