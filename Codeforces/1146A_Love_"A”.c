#include <stdio.h>
#include <string.h>

int main() {
   char word[55];
   int count=0;
   scanf("%s",word);
   int len=strlen(word);
   for(int i=0;i<len;i++)
   {
       if(word[i]=='a'  )
       {
           count++;
       }
   }
   int result= (2*count)-1;
   if(result>len)
   {
       result=len;
   }
   printf("%d",result);

    return 0;
}
