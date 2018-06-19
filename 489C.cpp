#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
#define mod 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll k;
ll ans;
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)return 1%m;
    ll x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
int main()
{
    ll x;
    sc2(x,k);
    if(x==0)
    {
        cout<<0<<endl;
        return 0;
    }
    ll gun=bigmod(2,k+1,mod);
    ll ans=((x%mod)*(gun))%mod;
    gun=bigmod(2,k,mod);
    ans=((ans%mod)*(gun));
    ll beg=(((gun)%mod)*((gun-1)%mod))%mod;
    // cout<<ans<<endl;
    ans=ans-beg;

    //cout<<ans<<endl;
    //cout<<beg<<endl;
    ll vag=bigmod(2,k,mod);
    vag=bigmod(vag,mod-2,mod);
    vag=(vag+mod)%mod;
    ans=((ans%mod)*(vag%mod))%mod;
    cout<<(ans+mod)%mod<<endl;
    //main();

    return 0;
}
