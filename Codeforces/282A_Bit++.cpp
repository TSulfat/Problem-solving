#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value=0;
    cin>> n;
    while(n--)
    {
        string op;
        cin>>op;
        if( op=="++X" || op=="X++")
        {
            value++;

        } else if(op=="--X" || op=="X--")
        {
            value--;
        }
    }
    cout<<value<< "\n" ;
    return 0;
}
