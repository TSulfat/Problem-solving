#include <stdio.h>
#include <string.h>

int main()
{
    int size,i,j;
    scanf("%d",&size);
    getchar();
    for(i=1; i<=size; i++)
    {
        char word[100];
        gets(word);
        int len= strlen(word);
        printf("%c",word[0]);
        for(j=0; j<len; j++)
        {
            if( word[j] ==' ')
            {
                printf("%c",word[j+1]);

            }
        }

        printf("\n");
    }


    return 0;
}
