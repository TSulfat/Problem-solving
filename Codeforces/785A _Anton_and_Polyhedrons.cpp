#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    while(n--){
     string s;
    cin>>s;
    if(s=="Tetrahedron")
    {
        sum+=4;
    }
    else if(s=="Cube")
    {
        sum+=6;
    }
    else if(s=="Octahedron")
    {
        sum+=8;
    }else if(s=="Dodecahedron")
    {
     sum+=12;
    }else if(s=="Icosahedron")
    {
     sum+=20;
    }
    }
    cout<<sum<< "\n";
    return 0;

}

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string, int> maps = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };
    int sum=0;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        sum += maps[s];
    }
    cout<<sum<< "\n";
    return 0;
}
