#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],c[100],i,j,k=0,l,m,n;
clrscr();
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(a[i]==b[j])
{
c[k]=a[i];
b[j]='&';
a[i]='*'; 
k++;
}
}
}
for(l=0;l<k;l++)
{
if(c[k]>c[k+1])
{
c[k]=c[k+1];
c[k+1]=c[k];
}
}
for(l=0;l<k;l++)
{
printf("%d ",c[l]);
}
getch();
}
