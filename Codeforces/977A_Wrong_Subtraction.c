#include<stdio.h>

int main()
{
    long long num;
    int k;
    scanf("%lld%d",&num,&k);
    for(int i=1; i<=k; i++)
    {
        if(num>0)
        {
            if(num%10==0)
            {
                num/=10;
                continue;
            }
            else{
                num=num-1;
            }
        }

    }
    printf("%lld",num);
    return 0;
}
