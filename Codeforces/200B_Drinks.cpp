#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];

    }
    for(int i=0;i<n;i++)
    {
        sum=sum+vec[i];
    }
    sum/=n;
    cout<< fixed << setprecision(12)<< sum;
    return 0;
}
