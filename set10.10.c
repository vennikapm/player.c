#include<stdio.h>
#include<conio.h>
void main()
{
    long int n,rem,hex=0,power=1;
    clrscr();
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        hex=hex+rem*power;
        n=n/10;
        power=power*2;
        
    }
    printf("%lX",hex);
    getch();
}
