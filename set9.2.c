#include <stdio.h>
void main() 
{
	int n,a[100],i,count=1,max=0,res,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
     for(j=i+1;j<n;j++)
     {
         res=(a[i])&(a[j]);
     
     }
	}
	if(n==1)
	{
	    printf("%d",a[0]);
	}
	else
	{
	printf("%d",res);
	}
	getch();
}
