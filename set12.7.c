#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100],b[100];
    int i,l,j=0;;
    scanf("%s",a);
    for(l=0;a[l]!='\0';l++);
    for(i=l-1;i>=0;i--)
    {
       b[j]=a[i];
       j=j+2;
    }
    i=1;
    while(i<j-1)
    {
        b[i]='-';
        i=i+2;
    }
    printf("%s",b);
    return 0;
}
