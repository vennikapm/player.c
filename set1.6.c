#include <stdio.h>
#include<conio.h>
int main() 
{
	char a[1000],b[1000];
	scanf("%s %s",a,b);
	int m=0,n=0,i,j,u,v,w,x,y,z,flag=0;
	for(i=0;a[i]!='\0';i++)
	{
	    m++;
	}
	for(i=0;b[i]!='\0';i++)
    {
        n++;
    }
    
	if(m==n)
	{
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			u=a[i];
			v=a[j];
			w=b[i];
			x=b[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
