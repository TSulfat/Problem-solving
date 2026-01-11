#include<stdio.h>
#include<string.h>

int main()
{
   int n,t;
   scanf("%d%d",&n,&t);
   char s[n+1];
   scanf("%s",s);
   for(int time=0;time<t;time++)
   {
       for(int i=0;i<n-1;i++)
       {
           if( s[i]=='B' && s[i+1]=='G')
           {
               char temp=s[i+1];
               s[i+1]=s[i];
               s[i]=temp;
               i++;
           }
       }
   }
   printf("%s",s);
    return 0;
}
