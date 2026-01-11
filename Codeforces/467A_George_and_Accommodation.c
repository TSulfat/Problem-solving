#include<stdio.h>
int main()
{
    int N,i,a,b,count=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        int sum=0;
        scanf("%d%d",&a,&b);
        sum=b-a;
        if(sum>=2){
            count++;

        }
        }

    if(count>=1){
        printf("%d\n",count);
    }
    else{
        printf("0\n");
    }

    return 0;
}
