#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,j=0,k,n,count=0;
    scanf("%s %d",a,&n);
    for(i=n;a[i]!='\0';i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("%s",b);
    getch();
}
