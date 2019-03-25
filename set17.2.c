#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,n,count=0,h=0,k=0,l;
scanf("%d %d",&n,&l);
while(k<n)
{
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
count++;
}
}
if(count>0)
{
h++;
}
count=0;
k++;
}
if(h>=l)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
