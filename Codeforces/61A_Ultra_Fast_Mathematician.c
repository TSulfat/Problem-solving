#include<stdio.h>
#include<string.h>
int main()
{
    char n[101],m[101];
    int i,result[101];
    scanf("%s%s",n,m);
    int len=strlen(n);
    for(i=0; i<len; i++)
    {
        int num1 = n[i] - '0';
        int num2 = m[i] - '0';
        result[i]= num1-num2;
        if(result[i]!=0)
        {
            result[i]=1;
        }
        else
            result[i]=0;
    }
    for(i=0;i<len;i++)
    {
         printf("%d",result[i]);
    }
    return 0;
}
