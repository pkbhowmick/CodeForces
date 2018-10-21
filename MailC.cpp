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
ll L[1005];
ll R[1005];
ll ans[1005];
int main()
{
    ll n;
    sc1(n);
    ll mx=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(L[i]);
        mx=max(mx,L[i]);
    }
    for(ll i=1;i<=n;i++)
    {
        sc1(R[i]);
        mx=max(mx,R[i]);
    }
    mx++;
    for(ll i=1;i<=n;i++)
    {
        ans[i]=mx-L[i]-R[i];
    }
    ll ok=1;
    ll mn=1001;
    for(ll i=1;i<=n;i++)
    {
        mn=min(mn,ans[i]);
        ll left=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(ans[j]>ans[i])left++;
        }
        if(left!=L[i])
        {
            ok=0;
            break;
        }
        ll right=0;
        for(ll j=i+1;j<=n;j++)
        {
            if(ans[j]>ans[i])right++;
        }
        if(right!=R[i])
        {
            ok=0;
            break;
        }
    }
    if(mn<=0)
    {
        mn=-mn+1;
    }
    else
        mn=0;
    if(ok==0)
    {
        printf("NO\n");

    }
    else
    {
        printf("YES\n");
        for(ll i=1;i<=n;i++)
            printf("%lld ",ans[i]+mn);

        printf("\n");
    }
    return 0;
}
