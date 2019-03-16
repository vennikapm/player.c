#include <stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,min=a[0],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]<min)
	    {
	        min=a[i];
	    }
	}
	for(i=0;i<n;i++)
	{
	    if(a[i]!=min)
	    {
	        sum=sum+a[i];
	    }
	}

    printf("%d",sum);
    getch();
}
