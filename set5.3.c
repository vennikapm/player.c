#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int l,t,p=0,k=0,i,j,flag=0,count=0;
scanf("%s %s",a,b);
l=strlen(a);
t=strlen(b);
while(p<l)
{
if(a[p]==b[k])
{
  count=0;
  for(i=p,j=0;i<p+t,j<t;i++,j++)
  {
  if(a[i]==b[j])
  {
  count++;
  }
  }
  if(count==t)
  {
  printf("yes");
  break;
  }
  else
  {
  flag++;
  }
}
  p++;
}
if(flag>1)
  {
  printf("no");
  }
  getch();
}
