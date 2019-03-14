#include <stdio.h>
#include<conio.h>
#include<math.h>
void main() 
{
	int a,b,c,res,ans;
	scanf("%d %d %d",&a,&b,&c);
	res=pow(a,b);
	ans=res%c;
	printf("%d",ans);
	getch();
}
