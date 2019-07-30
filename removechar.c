#include<stdio.h>
#include<ctype.h>
int main()
{
  int i;
  char a[30];
  scanf("%s ",a);
  for(i=0;i<30;++i)
  {
    if isalpha(a[i])
      printf("%c",a[i]);
      }
  return 0;
}
