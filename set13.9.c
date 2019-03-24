#include <stdio.h>
#include<conio.h>
void main()
{
	int n,a[1000],i,sum=0,j,min=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
	    printf("%d",a[n-1]);
	}
	else
	{
	for(i=0;i<n;i++)
	{
		
		    sum=sum+a[i];
		
		if(min>sum)
		{
		    min=sum;
		}
	}
	printf("%d",min);
	}
	
}
