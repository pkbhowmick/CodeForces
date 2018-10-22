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
ll vis[1000006];
int main()
{
    memset(vis,0,sizeof vis);
    ll a,b;
    sc2(a,b);
    ll lo=0;
    ll hi=1000000000;

    ll sum=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll x=mid*(mid+1)/2;
        if(x<=a+b)
        {
            sum=max(sum,mid);
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    vector<ll>ans;
    ll cnt=0;
    ll now=sum;
    //cout<<now<<endl;
    //return 0;
    while(a>0&&now>0)
    {
        ll st=min(a,now);
        if(vis[st]==0){
        cnt++;
        ans.pb(st);
        //cout<<st<<endl;
        vis[st]=1;
        a-=st;
        }
        now--;
    }
    printf("%lld\n",cnt);
    for(ll i=0;i<ans.size();i++)
    {
        printf("%lld ",ans[i]);
    }
    if(cnt>0)
    printf("\n");
    ll baki=sum-cnt;
    printf("%lld\n",baki);
    for(ll i=1;i<=sum;i++)
    {
        if(vis[i]==0)
            printf("%lld ",i);

    }
    if(baki>0)
        printf("\n");

    return 0;
}
