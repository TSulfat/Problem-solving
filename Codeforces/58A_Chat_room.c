#include<stdio.h>
#include<string.h>

int main()
{
    char s[103],t[]="hello";
    scanf("%s",s);
    int len = strlen(s),j=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==t[j])
        {
            j++;
        }

    }
    if(j==strlen(t))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
