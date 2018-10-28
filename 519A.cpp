#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll arr[10005];


int main()
{
    ll n;
    sc1(n);
    ll lo=0;
    ll tot=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        tot+=arr[i];
        lo=max(lo,arr[i]);
    }
    ll ans=100000;
    ll hi=ans;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll now=0;
        for(ll i=1;i<=n;i++)
        {
            now+=mid-arr[i];
        }
        if(now>tot)
        {
            ans=min(ans,mid);
            hi=mid-1;
        }
        else
            lo=mid+1;
    }
    printf("%lld\n",ans);
    //main();
    return 0;
}
