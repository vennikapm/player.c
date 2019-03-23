#include <stdio.h>
void main()
{
    char a[100];
    int i,j,k;
    scanf("%s %d",a,&k);
    for(i=(k-1);a[i]!='\0';i+=k)
    {
        printf("%c ",a[i]);
    }
}
