#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[1005];
int main()
{
    ll n;
    cin>>n;
    ll tot=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        tot+=arr[i];
    }
    sort(arr,arr+n);
    ll need=(ll)((ceil)((double)4.5*(double)n));
    ll ans=0;
    //cout<<tot<<
    for(ll i=0;i<n;i++)
    {
        if(tot>=need)break;
        ll add=5-arr[i];
        tot+=add;
        ans++;
    }
    cout<<ans<<endl;
    //main();
    return 0;
}
