#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

bool comp (string a,string b)
{
    return a.size() < b.size();
}
bool check(string a,string b)
{
    ll l=a.size();
    ll len=b.size();
    for(ll i=0;i<=len-l;i++)
    {
        ll f=1;
        for(ll j=0;j<l;j++)
        {
            if(a[j]!=b[i+j])
            {
                f=0;
                break;
            }
        }
        if(f==1)
            return true;
    }
    return false;
}
int main()
{
    ll n;
    sc1(n);
    vector<string>V;
    for(ll i=1;i<=n;i++)
    {
        string ss;
        cin>>ss;
        V.pb(ss);
    }
    sort(V.begin(),V.end(),comp);
    ll flag=1;
    for(ll i=1;i<n;i++)
    {
        string a=V[i-1];
        string b=V[i];
        bool now=check(a,b);
        //cout<<b<<endl;
        if(!now)
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("YES\n");
        for(ll i=0;i<n;i++)
        {
            cout<<V[i]<<endl;
        }
    }
    else
        printf("NO\n");
    return 0;
}
