#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;


ll arr[2005];
ll cnt[2005];
ll brr[2005];
int main()
{
    ll n,k;
    sc2(n,k);
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
        brr[i]=arr[i];
    }
    memset(cnt,0,sizeof cnt);
    sort(arr,arr+n);
    if(k==1)
    {
        cout<<arr[n-1]<<endl;
        cout<<n<<endl;
        return 0;
    }
    ll ans=0;
    for(ll i=n-1,j=1;j<=k;j++,i--)
    {
        ans+=arr[i];
        cnt[arr[i]]++;
    }
    vector<ll>v;
    ll now=0;
    for(ll i=0;i<n;i++)
    {
        now++;
        if(cnt[brr[i]]>0)
        {
            v.pb(now);
            now=0;
            cnt[brr[i]]--;
        }
        if(v.size()==k-1)
        {
            v.pb(n-i-1);
            break;
        }
    }
    printf("%lld\n",ans);
    for(ll i=0;i<k;i++)
    {
        printf("%lld ",v[i]);
    }
    printf("\n");
    return 0;
}
