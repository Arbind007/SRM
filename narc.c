#include <stdio.h>
#include<math.h>
int main()
 {
   int n,m,ctr=0,sum=0;
   scanf("%d",&n);
   m=n;
   while(m)
   { 
    m=m/10;
    ctr++;    
   }
   m=n;
   while(n)
   {
    sum=sum+pow(n%10,ctr);
    n=n/10;
   }
   if (sum==m)
    printf("Narcissistic Number");
   else
    printf("NOT Narcissistic Number");
   return 0;
 }
