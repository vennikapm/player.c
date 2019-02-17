#include<stdio.h>
#include<conio.h>
void main()
{
  char a[100],b[100];
  int i,j,count=1,k;
  clrscr();
  
  scanf("%[^\n]s ",a);
  scanf("%s",b);
  
 
  for(i=0;a[i]!='\0';i++)
  {
  for(j=0;b[j]!='\0';j++)
  {
       if(a[i]==b[j])
       {
        
           count++;
           a[i]='$';
           b[j]='$';
       }
   }
  }
  k=i;
   if(count==k)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   
getch();
}
