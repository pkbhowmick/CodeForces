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
    ll l,r,x,y;
    sc2(l,r);
    sc2(x,y);
    vector<ll>V;
    for(ll i=1;i*i<=y;i++)
    {
        if(y%i==0)
        {
            ll vag=y/i;
            if(i>=l&&i<=r)V.pb(i);
            if(vag!=i&&vag>=l&&vag<=r)V.pb(vag);
        }
    }
    ll ans=0;
    ll sz=V.size();
    for(ll i=0;i<sz;i++)
    {
        for(ll j=i;j<sz;j++)
        {
            ll a=V[i];
            ll b=V[j];
            ll gc=__gcd(a,b);
            ll lc=(a*b)/gc;
            if(gc==x&&lc==y)
            {
                ans++;
                if(a!=b)
                    ans++;
            }
        }
    }
    printf("%lld\n",ans);

    return 0;
}
