#include<stdio.h>
#include<string.h>
int main()
{
    char nam[100001];
    int acount=0,dcount=0,len;
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {

        scanf(" %c",&nam[i]); // Space before %c to consume any leading whitespaces
        if(nam[i]=='A')
           {
                acount++;

           }
            else
            {
                dcount++;

            }

    }
    if(acount>dcount){
        printf("Anton");
    }
    else if(dcount>acount)
    {
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}
