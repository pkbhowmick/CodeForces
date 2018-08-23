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
    ll test;
    sc1(test);
    while(test--)
    {
        ll n;
        sc1(n);
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll v;
            sc1(v);
            if(v>0)
                ans++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
