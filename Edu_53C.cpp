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
ll arr[200005];

int main()
{
    memset(arr,0,sizeof arr);
    ll n,k;
    sc2(n,k);
    ll lo=INT_MAX;
    ll hi=0;
    ll tot=0;
    for(ll i=1; i<=n; i++)
    {
        ll v;
        sc1(v);
        arr[1]++;
        arr[v+1]--;
        lo=min(lo,v);
        hi=max(hi,v);
        tot+=v;
    }
    for(ll i=1; i<=200000; i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    for(ll i=1; i<=200000; i++)
        arr[i]=arr[i]+arr[i-1];


    hi--;
    ll loo=lo;
    ll ans=0;
    ll hii=hi;
    while(tot>lo*n)
    {
        ll cut;

        while(loo<=hii)
        {
            ll mid=(loo+hii)/2;
            if(tot-arr[mid]<=k)
            {
                hii=mid-1;
                cut=mid;
            }
            else
                loo=mid+1;
        }
        loo=lo;
        hii=cut-1;
        tot=arr[cut];
        ans++;
    }
    printf("%lld\n",ans);

    return 0;
}
