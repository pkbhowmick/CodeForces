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
ll arr[100005];
int main()
{
    ll n,k;
    sc2(n,k);
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        sum+=arr[i];
    }
    if(sum%k!=0)
    {
        printf("No\n");
    }
    else
    {
        vector<ll>ans;
        ll need=sum/k;
        ll now=0;
        ll cnt=0;
        for(ll i=1;i<=n;i++)
        {
            now+=arr[i];
            cnt++;
            if(now==need)
            {
                ans.pb(cnt);
                cnt=0;
                now=0;
            }
            else if(now>need)
            {
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
        ll sz=ans.size();
        for(ll i=0;i<sz;i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
