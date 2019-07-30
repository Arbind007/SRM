#include <stdio.h>
#include<math.h>
int main() {
  int n,a,b,i;
  scanf("%d",&n);
  for(i=sqrt(n);i>=1;i--)
  {
    if (n%i==0)
   {
    a=i;
    b=n/i;
     break;
  }
    a--;
    
  }
  printf("%d %d",a,b);
	return 0;
}
