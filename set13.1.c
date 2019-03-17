#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],b[100];
    int i,n,k=0,c=122;
    scanf("%d",&n);
    while(k<n)
    {
        scanf("%s",a);
        if(a[0]<c)
        {
            for(i=0;a[i]!='\0';i++)
            {
                b[i]=a[i];
            }
            c=a[0];
        }
        
        
        k++;
    }
    b[i]='\0';
    printf("%s",b);
}
