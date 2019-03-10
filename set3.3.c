#include <stdio.h>
#include<conio.h>
void main() 
{
    int a[10],k,i=0,x,n,j=0,max=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
	}

    while(j<x)
	{
	    scanf("%d",&k);
	    a[n]=k;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("%d ",max); 
	j++; 
	}
	getch();
}
