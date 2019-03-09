#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,rem,bin=0,count=0,rem2,power=1;
    clrscr();
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        bin=bin+rem*power;
        n=n/2;
        power=power*10;
    }
    while(bin>0)
    {
        rem2=bin%10;
        if(rem2==1)
        {
            count++;
        }
        bin=bin/10;
    }
    printf("%d",count);
    getch();
}
