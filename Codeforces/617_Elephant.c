#include<stdio.h>
int main()
{
    int steps,x;
    scanf("%d",&x);
    steps=x/5;
    if(x%5 !=0)
    {
        steps++;
    }
    printf("%d\n",steps);
    return 0;

}
