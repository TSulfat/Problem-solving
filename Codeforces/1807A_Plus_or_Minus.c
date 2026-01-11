#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       int a,b,c,sum=0;
       scanf("%d%d%d",&a,&b,&c);
       if((sum=a+b)==c)
       {
           printf("+\n");
       }
       else if((sum=a-b)==c)
       {
           printf("-\n");
       }
   }

    return 0;
}
