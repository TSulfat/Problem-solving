#include<stdio.h>

int main()
{
    long long n,pos;
    scanf("%lld %lld",&n,&pos);

    long long odd=(n+1)/2;

    if(pos<=odd)
    {
         printf("%lld\n",2*pos-1);
    }

    else
    {
        printf("%lld\n",2*(pos-odd));
    }

    return 0;
}
