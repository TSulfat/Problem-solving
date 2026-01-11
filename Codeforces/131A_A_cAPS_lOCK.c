#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int len=strlen(s),i,j;
    for( i=1; i<len; i++)
    {
        if(islower(s[i]))
        {
            break;
        }
    }
    if(i==len)
    {
        for(j=0; j<=len; j++)
        {

            if(s[j]>='A' && s[j]<='Z')
            {
                s[j]= tolower(s[j]);
            }
            else{
                s[j]= toupper(s[j]);
            }

            }
            printf("%s\n",s);
    }
    else
    {
        printf("%s\n",s);
        return 0;
    }
    return 0;
}
