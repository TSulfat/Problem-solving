#include<stdio.h>
#include<string.h>
int main()
{
    char s[103];
    scanf("%s",s);
    int i,j,temp;
    int len=strlen(s);
    for( i=0; i<len-1; i=i+2)
    {
        for( j=0; j<len-i-1; j=j+2)
        {
            if(s[j]>s[j+2])
            {
                temp=s[j];
                s[j]=s[j+2];
                s[j+2]=temp;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}
