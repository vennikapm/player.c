#include <stdio.h>
#include<conio.h>
void main()
{
        int n,i,j,count=0,a[100];
        scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       for(i=1;;i++)
       {
           count=0;
          for(j=0;j<n;j++)
          {
              if(i%a[j]==0)
              {
                  count++;
              }
          }
          if(count==n)
          {
              printf("%d",i);
              break;
          }
       }
    getch();
}
