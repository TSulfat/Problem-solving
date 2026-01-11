#include <stdio.h>
int main()
{
    int a,count=0,i,j;
    scanf("%d",&a);
    int b[a];
    for( j=0; j<a; j++)
    {
        scanf("%d",&b[j]);
    }
    for( j=0; j<a; j++)
    {
        if(b[j] != b[j-1])
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
