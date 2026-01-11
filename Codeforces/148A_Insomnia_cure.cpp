#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>dragon;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(int i=k;i<=d;i=i+k)
    {
        dragon.insert(i);
    }
    for(int i=l;i<=d;i=i+l)
    {
        dragon.insert(i);
    }
    for(int i=m;i<=d;i=i+m)
    {
        dragon.insert(i);
    }
    for(int i=n;i<=d;i=i+n)
    {
        dragon.insert(i);
    }
    cout<<dragon.size()<< "\n";

}
