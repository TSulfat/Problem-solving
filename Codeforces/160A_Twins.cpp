#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
        sort(vec.rbegin(),vec.rend());

     for(int i=0;i<n;i++)
    {
        sum+=vec[i];
    }
    int coin=0,sum1=0;
     for(int i=0;i<n;i++)
    {
        sum1+=vec[i];
        coin++;
        if(sum1>sum-sum1)
        {
            break;

        }
    }
    cout<<coin;
    return 0;

}
