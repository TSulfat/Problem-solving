#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i=0,len;
    scanf("%s",s);
    len = strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='y' &&
                s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' &&
                s[i]!='O' && s[i]!='U' && s[i]!='Y')
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+('a'-'A');
            }
            printf(".%c",s[i]);
        }
    }
    return 0;
}
