#include <stdio.h>

int main()
{
    char a[1000];
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0,j=i+1;i<n,j<n;i++,j++)
    {
        c=0;
        
            if(a[i]==a[j])
            {
                c++;
            }
        
        if(c==1)
        {
            printf("yes");
            break;
        }
                   
    }
    if(c==0)
    {
        printf("no");
    }

    return 0;
}
