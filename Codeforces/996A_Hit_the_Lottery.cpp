#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,count=0;
    cin>>num;
    int d[]={100,20,10,5,1};
    for(int value:d)
    {
        count+= (num/value);
        num%=value;
    }

    cout<<count<<endl;
}
