#include<stdio.h>

int main()
{
    int cas,h,g,sum=0;
    scanf("%d%d",&cas,&h);
    for(int i=1;i<=cas;i++)
    {
        scanf("%d",&g);
        if(g<=h)
        {
            sum=sum+1;
        }
        else{
            sum=sum+2;
        }
    }
    printf("%d\n",sum);
    return 0;
}
