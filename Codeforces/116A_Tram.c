#include<stdio.h>

int main()
{
    int n,max=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        c=c-a;
        c=c+b;
        if(c>max)
        {
            max=c;
        }

    }
    printf("%d\n",max);
    return 0;
}
