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
    ll arr[105]={0};
    ll n,m;
    sc2(n,m);
    for(ll i=1;i<=m;i++)
    {
        ll v;
        sc1(v);
        arr[v]++;
    }
    ll mx=m/n;
    for(ll i=mx;i>0;i--)
    {
        ll now=0;
        for(ll j=1;j<=100;j++)
        {
            now=now+(arr[j]/i);
        }
        if(now>=n)
        {
            printf("%lld\n",i);
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}
