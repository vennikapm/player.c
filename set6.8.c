#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j,n,k=0,t[250],m,q=0,e=0;
gets(a);
gets(b);
m=strlen(b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' '||a[i+1]=='\0')
{
for(j=k;j<=i;j++)
{
if(a[j]==b[q])
{
q++;
}
}
if(q==m)
{
e++;
}
q=0;
k=i+1;
}
}
printf("%d ",e);
}
