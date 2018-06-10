#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[1000005];
ll cum[1000005];
int main()
{
    memset(arr,0,sizeof arr);
    ll n,k;
    sc2(n,k);
    for(ll i=0; i<n; i++)
    {
        ll v;
        sc1(v);
        arr[v]++;
    }
    cum[0]=0;
    for(ll i=1;i<=1000000;i++)
    {
        cum[i]=cum[i-1]+arr[i];
    }
    ll ans=0;
    for(ll i=1; i<=1000000; i++)
    {
        ll lo=i+1;
        ll hi=min((ll)1000000,k+i);
        ll sum=cum[hi]-cum[lo-1];
        if(sum==0)
            ans+=arr[i];
    }
    cout<<ans<<endl;
   // main();
    return 0;
}
