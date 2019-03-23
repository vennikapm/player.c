#include <stdio.h>
void main()
{
    char a[100];
    int i,j,k;
    scanf("%s %d",a,&k);
    for(i=(k-1);a[i]!='\0';i+=k)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}
