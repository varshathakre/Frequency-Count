#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    string s;
    map<string,int>mp;
    cout<<"How many Recordes";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        mp[s]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<" ="<<p.second<<"\n";
    }
}