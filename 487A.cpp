#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

map<ll, set<char> >mp;

int main()
{
    string str;
    cin>>str;
    ll len=str.size();
    for(ll i=0;i<len;i++)
    {
        if(str[i]=='.')continue;
        mp[i].insert(str[i]);
        if(i+1<len)
            mp[i+1].insert(str[i]);
        if(i-1>=0)
            mp[i-1].insert(str[i]);
    }
    auto it=mp.begin();
    while(it!=mp.end())
    {
        set<char>now=it->second;
        if(now.size()==3){
            cout<<"Yes";
            return 0;
        }

            it++;
    }
    cout<<"No";
    return 0;
}
