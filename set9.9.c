#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,r,b,fact=1,fact2=1,npr;
	scanf("%d %d",&n,&r);
	b=n-r;
	while(n>0)
	{
	    fact=fact*n;
	    n--;
	}
	while(b>0)
	{
	    fact2=fact2*b;
	    b--;
	}
	npr=fact/fact2;
	printf("%d",npr);
	getch();
}
