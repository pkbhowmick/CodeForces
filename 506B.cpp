#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
vector<ll>v;

int main()
{
    ll n;
    sc1(n);

    for(ll i=0;i<n;i++)
    {
        ll vv;
        sc1(vv);
        v.pb(vv);
    }
    ll ans=1;
    ll cnt=1;
    for(ll i=1;i<n;i++)
    {
        if(v[i]<=v[i-1]*2)
        {
            cnt++;
            ans=max(cnt,ans);
        }
        else
            cnt=1;
    }
    printf("%lld\n",ans);
    return 0;
}


