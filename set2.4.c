#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n;i++) 
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            a[i]='\0';
        }
    }
for(i=n;i>=0;i--)
{
    
   
    printf("%c",a[i]);
    
}
getch();
}
