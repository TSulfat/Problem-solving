#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char a[103],b[103];
   int count=0;
   scanf("%s%s",a,b);
    int len=strlen(a);
   for(int j=0;j<=len;j++)
   {
       a[j]=tolower(a[j]);
       b[j]=tolower(b[j]);
   }
   for(int i=0;i<len;i++)
   {
       if(a[i]<b[i])
       {
           printf("-1");
           return 0;
       }
       else if(a[i]>b[i])
       {
           printf("1");
           return 0;
       }
   }
   printf("0\n");
    return 0;
}
