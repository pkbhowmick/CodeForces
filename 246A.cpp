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
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        ll v;
        sc1(v);
        v+=k;
        if(v<=5)cnt++;
    }
    ll ans=cnt/3;
    cout<<ans<<endl;
    //main();
    return 0;
}
