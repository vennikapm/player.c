#include <stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100],d[100],i,j,l=0,c,k;
scanf("%s %s",a,b);
for(i=0;a[i]!='\0';i++);
for(j=0;b[j]!='\0';j++);
if(i>j)
{
     for(i=0;i<j;i++)
     {
         printf("%c",a[i]);
     }
       for(i=0;i<j;i++)
       {
           printf("%c",b[i]);
       }
     
}
else if(j>i)
{
    
for(k=0;k<i;k++)
{
    printf("%c",a[k]);
}
for(k=0;k<i;k++)
{
    printf("%c",b[k]);
}
}
else
{
    for(k=0;k<i;k++)
{
    printf("%c",a[k]);
}
for(k=0;k<i;k++)
{
    printf("%c",b[k]);
}
        
    }

getch();
}
