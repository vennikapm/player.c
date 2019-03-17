#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,bin=0,power=1,rem,rem2,i=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=rem*power+bin;
        n=n/2;
        power=power*10;
    }
    while(bin>0)
    {    ++i;
        rem2=bin%10;
        if(rem2==1)
        {
            printf("%d",i);
            break;
        }
        bin=bin/10;
    }
    
    
    getch();
}
