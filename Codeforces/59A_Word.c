#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char word[102];
    int len,i,j,low=0,up=0;
    scanf("%s",word);
    len= strlen(word);
    for(i=0; i<len; i++)
    {
        if(word[i]>='a'&& word[i]<='z')
        {
            low++;
        }
        else if(word[i]>='A'&& word[i]<='Z')
        {
            up++;
        }
    }
    if(up>low)
    {
        for( j=0; j<len; j++)
        {
            word[j]=toupper(word[j]);
        }
        printf("%s",word);
    }
    else
    {
        for( j=0; j<len; j++)
        {
            word[j]=tolower(word[j]);
        }
        printf("%s",word);
    }
    return 0;
}
