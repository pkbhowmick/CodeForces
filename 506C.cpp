#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

multiset<ll>x;
multiset<ll>y;
vector<ll>V;
int main()
{
    ll n;
    sc1(n);
    for(ll i=0; i<n; i++)
    {
        ll a,b;
        sc2(a,b);
        V.pb(a);
        V.pb(b);
        x.insert(a);
        y.insert(b);
    }
    ll ans=0;
    for(ll i=0;i<2*n;i+=2)
    {
        x.erase(x.find(V[i]));
        y.erase(y.find(V[i+1]));
        ll lo=*(--x.end());
        ll hi=*(y.begin());
        ans=max(ans,hi-lo);
        x.insert(V[i]);
        y.insert(V[i+1]);
    }
    printf("%lld\n",ans);

    return 0;
}


