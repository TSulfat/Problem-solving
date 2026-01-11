#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=a+b*c;
    int sum2=a*(b+c);
    int sum3=a*b*c;
    int sum4=(a+b)*c;
    int sum5=a+b+c;
    int maxValue = max({sum1,sum2,sum3,sum4,sum5});
    cout<<maxValue<< "\n";

    return 0;
}
