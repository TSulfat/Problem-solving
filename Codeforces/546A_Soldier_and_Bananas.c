#include<stdio.h>
int main()
{
    int k,n,w,borrow,total=0;
    scanf("%d%d%d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        total=total+(i*k);
    }
    borrow=total-n;
    if(borrow<=0)
    {
        printf("0");
    }
    else{
         printf("%d\n",borrow);
    }

    return 0;
}
