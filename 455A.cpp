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
    ll cnt[100005]={0};
    ll n;
    sc1(n);
    ll dp[100005];
    for(ll i=1;i<=n;i++)
    {
        ll v;
        sc1(v);
        cnt[v]++;
    }
    dp[0]=0;
    dp[1]=cnt[1];
    for(ll i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
    }
    cout<<dp[100000]<<endl;
    return 0;
}
