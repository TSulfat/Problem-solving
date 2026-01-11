#include<stdio.h>

int main()
{
    int a,b,count=0,i,j;
    scanf("%d%d",&a,&b);
    int c[101];
    for( i=1;i<=a;i++)
    {
         scanf("%d",&c[i]);
    }
    int point= c[b];
    for(i=1;i<=a;i++)
    {
          if(point<=c[i] && c[i]>0)
          {
              count++;
          }
    }

    printf("%d\n",count);
    return 0;
}
