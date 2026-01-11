#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,rem=0;
        scanf("%d%d",&a,&b);
        rem=a%b;
        if(rem==0)
        {
            printf("0\n");
        }
        else{
            printf("%d\n",b-rem);
        }
    }
    return 0;
}
