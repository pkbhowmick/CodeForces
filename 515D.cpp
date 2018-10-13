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
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1%m;
    ll x=bigmod(a,b/2,m);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;
}
ll arr[200005];
int main()
{
    ll mod=998244353;
    ll a,b;
    sc2(a,b);
    memset(arr,0,sizeof arr);
    string s1,s2;
    cin>>s1>>s2;
    vector<ll>v1;
    for(ll i=a-1,j=0;i>=0;i--,j++)
    {
        if(s1[i]=='1')
        {
            v1.pb(j);
        }
    }
    ll tot=0;
    for(ll i=b-1,j=0;i>=0;i--,j++)
    {
        if(s2[i]=='1')
        {
            arr[j]++;
            tot++;
            //cout<<j<<endl;
        }
    }
    for(ll i=1;i<=200000;i++)
        arr[i]=arr[i]+arr[i-1];
    ll ans=0;
    ll sz=v1.size();
    for(ll i=0;i<sz;i++)
    {
        ll now=v1[i];
        ll cnt=tot-arr[now-1];
        //cout<<cnt<<endl;
        ll add=bigmod(2LL,now,mod);
        add=((add%mod)*(cnt%mod))%mod;
        //cout<<add<<endl;
        ans+=add;
        ans=ans%mod;
    //cout<<ans<<endl;
    }
    printf("%lld\n",ans);
    return 0;
}
