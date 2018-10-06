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
ll sum(ll x)
{
    ll s=0;
    while(x!=0)
    {
        s+=(x%10);
        x=x/10;
    }
    return s;
}
int main()
{
    ll n;
    sc1(n);
    ll a=0;
    while(a*10+9<=n)
    {
        a=a*10+9;
    }
    ll b=n-a;
    ll ans=sum(a)+sum(b);
    cout<<ans<<endl;
    //main();
    return 0;
}
