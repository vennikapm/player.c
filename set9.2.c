#include <stdio.h>
void main() 
{
	int n,a[100],i,count=1,max=0,res=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
     
         res=res&a[i];
     
     }
	

	printf("%d",res);
	getch();
}
