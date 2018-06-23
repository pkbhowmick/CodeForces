#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll bs(ll n,ll can)
{
    ll now=0;
    while(can>0)
    {
        if(can>=n){
        now+=n;
        can=can-n;
        }
        else
        {
            now+=can;
            can=0;
        }

        ll m=can/10;
        can=can-m;
    }
    return now;
}
int main()
{
    ll n;
    sc1(n);
    ll lo=1;
    ll hi=n;
    ll ans=n+1;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll now=bs(mid,n);
        if(now*2>=n)
        {
            ans=min(ans,mid);
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    printf("%lld\n",ans);
    return 0;
}
