#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,b,c=0,d=0,e=0,f=0;
clrscr();
scanf("%[^\n]s",a);
for(b=0;a[b]!='\0';b++);
for(i=0;i<b;i++)
{
 if(a[i]=='I')
 {
 if(a[i+1]=='V')
 {
 c=4;
 i++;
 }
 else if(a[i+1]=='X')
 {
 c=9;
 i++;
 }
 else
 {
 c=c+1;
 }}
 if(a[i]=='V')
 d=d+5;
 if(a[i]=='X')
 e=e+10;
 }
 f=c+d+e;
 printf("%d",f);
 getch();
 }
