#include <stdio.h>
int main()
{
 int f=0,s=1,t,n,i;
 scanf("%d",&n);
 printf("%d ",f);
 printf("%d ",s);
 for(i=3;i<=n;i++)
  {
    t=f+s;
    printf("%d " ,t);
    f=s;
    s=t;
  }
 return 0;   
 }
