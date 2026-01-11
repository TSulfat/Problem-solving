#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    scanf("%s",s);
    int count=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            count++;
        }
    }
    sprintf(s1, "%d", count);
    if(strcmp(s1,"7")==0||strcmp(s1,"4")==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
