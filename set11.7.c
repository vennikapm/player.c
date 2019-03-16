#include<string.h>
#include<conio.h>

void main()
{
    char a[100],b[1000],c[1000];
    int i,j,k=0,num=0,l=0,len,d=0;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    len=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
           c[k]=a[i]; 
           k++;
        }
        if(a[i]==' ')
        {
            d++;
            for(j=0;j<k;j++)
            {
                if(c[j]==b[l])
                {
                    num++;
                }
                l++;
            }
            for(j=0;j<k;j++)
            {
                c[j]='\0';
                num=0;
                l=0;
            }
        }
    }
    num=0;
    l=0;
        for(j=0;j<k;j++)
            {
                if(c[j]==b[l])
                {
                    num++;
                    l++;
                }
            }
            if(len==num)
            {
                d++;
            }  
        
    
    printf("%d",d);
    getch();
}
