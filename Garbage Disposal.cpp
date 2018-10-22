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
    ll n,k;
    sc2(n,k);
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
    }
    ll ans=0;
    ll rem=0;
    for(ll i=1;i<=n;i++)
    {
        ll now=arr[i]+rem;
        if(now<k&&rem!=0)
        {
            ans++;
            rem=0;
            continue;
        }
        ans+=now/k;
        rem=now%k;
    }
    if(rem!=0)
        ans++;
    printf("%lld\n",ans);
    return 0;
}
