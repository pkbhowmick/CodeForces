#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[200005];
ll cum[200005];
ll cum2[200005];

bool bs(ll lo,ll hi,ll need)
{
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll sum=cum2[mid];
        if(sum==need)
            return true;
        else if(sum>need)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return false;
}
bool bs2(ll lo,ll hi,ll need)
{
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll sum=cum2[mid];
        if(sum==need)
            return true;
        else if(sum>need)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return false;
}
int main()
{
    ll n;
    sc1(n);

    cum[0]=0;
    ll tot=0;
    for(ll i=1; i<=n; i++)
    {
        sc1(arr[i]);
        cum[i]=cum[i-1]+arr[i];
        tot+=arr[i];
    }
    cum2[0]=0;
    for(ll i=n,j=1; i>0; i--,j++)
    {
        cum2[j]=cum2[j-1]+arr[i];
    }

    ll ans2=0;
    for(ll i=1; i<n; i++)
    {
        ll need=cum[i];
        if(bs2(1,n-i,need))
        {
            ans2=max(ans2,i);
        }
    }
    cout<<cum[ans2]<<endl;
    return 0;
}
