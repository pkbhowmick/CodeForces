#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

int main()
{
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    ll ls=s.size();
    ll lt=t.size();
    bool sp=false;
    ll id=-1;
    for(ll i=0;i<ls;i++)
    {
        if(s[i]=='*')
        {
            sp=true;
            id=i;
        }
    }
    ll must=ls;
    if(sp)
    {
        must--;
    }
    if(lt<must||(sp==false&&lt!=ls))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(ll i=0;i<id;i++)
    {
        if(s[i]!=t[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(ll i=ls-1,j=lt-1;i>id;i--,j--)
    {
        if(s[i]!=t[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
