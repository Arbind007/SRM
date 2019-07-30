#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main() {
int i,cu=0,cl=0;
char a[100];
scanf("%[^\n]s",a);
int len=strlen(a);
for(i=0;i<len;i++)
 {
   if isupper(a[i])
    cu++;
   else if islower(a[i])
    cl++;
 }    
printf("Uppercase Letters=%d\nLowercase Letters=%d",cu,cl); 
return 0;
}
