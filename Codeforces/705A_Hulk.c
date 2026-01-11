#include<stdio.h>

int main()
{
    int n,result=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("I hate it");
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        if(i%2==1)
        {
            printf("I hate that ");
        }
        else
        {
            printf("I love that ");
        }
    }
    if(n%2==0)
    {
        printf("I love it");
    }
    else if(n%2==1)
    {
        printf("I hate it");
    }
    return 0;
}
