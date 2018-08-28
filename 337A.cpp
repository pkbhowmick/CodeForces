#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[100005];
int main()
{
    ll m,n;
    sc2(n,m);
    for(ll i=0;i<m;i++)
    {
        sc1(arr[i]);
    }
    sort(arr,arr+m);
    ll ans=1e18;
    for(ll i=0,j=n-1;j<m;i++,j++)
    {
        ans=min(ans,arr[j]-arr[i]);
    }
    printf("%lld\n",ans);


    return 0;
}
