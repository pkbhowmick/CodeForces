#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;


ll arr[105];
ll odd[105];
ll even[105];
ll dp[105][105][105];
ll n,b;

ll solve(ll pos,ll taka,ll prev)
{

    if(pos==n)
    {
        //cout<<pos<<" "<<prev<<" "<<taka<<endl;
        if(odd[pos]-odd[prev-1]==even[pos]-even[prev-1])
        return 0;
        else
            return -1000000000;
    }
    if(dp[pos][taka][prev]!=-1)return dp[pos][taka][prev];
    ll ret1=0,ret2=0;
    ll need=0;
    if(pos<n)
        need=abs(arr[pos]-arr[pos+1]);
    if(odd[pos]-odd[prev-1]==even[pos]-even[prev-1]&&taka-need>=0)
    {
        ret1=1+solve(pos+2,taka-need,pos+1);
        //cout<<pos<<" "<<prev<<" "<<taka<<endl;
    }
    ret2=solve(pos+2,taka,prev);
    return dp[pos][taka][prev]=max(ret1,ret2);
}
int main()
{
    memset(dp,-1,sizeof dp);
    odd[0]=0;
    even[0]=0;
    //ll n,b;
    sc2(n,b);
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        if(arr[i]%2==0)
        {
            even[i]=1;
        }
        if(arr[i]%2==1)
        {
            odd[i]=1;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        odd[i]=odd[i-1]+odd[i];
        even[i]=even[i-1]+even[i];
    }
    ll ans=solve(2,b,1);
    ans=max(ans,0LL);
    cout<<ans<<endl;

    return 0;
}
