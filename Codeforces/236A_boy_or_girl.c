#include<stdio.h>
#include<string.h>

int main()
{
    char nam[100];
    scanf("%s",nam);
    int len= strlen(nam);
    int uniquechar=0,unique,i,j;
    for(i=0; i<len; i++)
    {
        unique=1;
        for(j=0; j<i; j++)
        {
            if(nam[i]==nam[j])
            {
                unique=0;
                //break;
            }
        }
        if(unique==1)
        {
            uniquechar++;
        }
    }

    if(uniquechar%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
