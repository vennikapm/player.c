#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,k,count=0,c;
	scanf("%s %d",a,&k);
	c=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='0'||a[i]<=k)
	    {
	        count++;
	    }
	}
	if(c==count)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
}
