#include<stdio.h>

int main()
{
    int N,i,a;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(a==0){
            continue;

        }
        else{
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");
    return 0;
}
