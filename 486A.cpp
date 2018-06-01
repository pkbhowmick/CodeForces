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
    ll n,k;
    sc2(n,k);
    map<ll,ll>mp;
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        mp[v]=i;
    }
    if(mp.size()<k)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
        auto it=mp.begin();
        while(k--)
        {
            cout<<it->second<<" ";
            it++;
        }
        printf("\n");

    }
   // main();

    return 0;
}
