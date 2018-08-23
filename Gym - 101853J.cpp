#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[10004];
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        memset(arr,0,sizeof arr);
        ll n;
        sc1(n);
        for(ll i=0;i<n;i++)
        {
            ll v;
            sc1(v);
            arr[v]++;
        }
        ll ans=0;
        for(ll i=2;i<=10000;i++)
        {
            ans=max(ans,arr[i-1]+arr[i]);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
