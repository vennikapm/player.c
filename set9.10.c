#include <stdio.h>
#include<conio.h>
void main() 
{
	int n,r,b,fact=1,fact2=1,ncr,fact3=1;
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
	while(r>0)
	{
	    fact3=fact3*r;
	    r--;
	}
	ncr=fact/(fact2*fact3);
	printf("%d",ncr);
	getch();
}
