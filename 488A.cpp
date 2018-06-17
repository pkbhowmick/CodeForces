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
    ll arr[15];
    map<ll,ll>fi;
    ll n,m;
    sc2(n,m);
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
    }
    for(ll i=1;i<=m;i++)
    {
        ll v;
        sc1(v);
        fi[v]++;
    }
    for(ll i=1;i<=n;i++)
    {
        ll now=arr[i];
        if(fi.count(now)>0)
        {
            printf("%lld ",now);
        }
    }
    printf("\n");
    //main();
    return 0;
}
