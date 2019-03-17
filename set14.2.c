#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,count=0,j=0,k=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]%2==0)
       {
           j++;
       }
       else
       {
           k++;
       }
    }
    count=j*k;
    printf("%d",count);
    getch();
}
