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
int main()
{
    ll test;
    sc1(test);
    while(test--)
    {
        ll n,pos,l,r;
        sc3(n,pos,l);
        sc1(r);
        ll ans=n/pos;
        ll bad=r/pos-(l-1)/pos;
        ans-=bad;
        printf("%lld\n",ans);
    }
    return 0;
}
