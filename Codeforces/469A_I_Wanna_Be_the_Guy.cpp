#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int p;
    cin>>p;
    set<int>Plevels;
    for(int i=0;i<p;i++)
    {
        int level;
        cin>>level;
        Plevels.insert(level);
    }
    int q;
    cin>>q;
    set<int>Qlevels;
    for(int i=0;i<q;i++)
    {
        int level;
        cin>>level;
        Qlevels.insert(level);
    }
    Plevels.insert(Qlevels.begin(),Qlevels.end());
    if(Plevels.size()==num)
    {
        cout<< "I become the guy."<< "\n";
    }
    else{
        cout<< "Oh, my keyboard!"<<"\n";
    }
    return 0;
}
