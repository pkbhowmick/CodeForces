#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[300005];
ll brr[300005];
int main()
{
    ll n,m;
    sc1(n);
    ll tot=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        tot+=arr[i];
    }
    sc1(m);
    for(ll i=1;i<=m;i++)
    {
        sc1(brr[i]);
        tot-=brr[i];
    }
    if(tot!=0)
    {
        printf("-1\n");
        return 0;
    }
    ll p1=1,p2=1;
    ll s1=arr[1],s2=brr[1];
    ll ans=0;
    while(p1<=n&&p2<=m)
    {
        if(s1==s2)
        {
            ans++;
            p1++;
            p2++;
            if(p1<=n&&p2<=m)
            {
                s1=arr[p1];
                s2=brr[p2];
            }
        }
        else if(s1>s2)
        {
            p2++;
            s2+=brr[p2];
        }
        else if(s2>s1)
        {
            p1++;
            s1+=arr[p1];
        }
    }
    printf("%lld\n",ans);
    return 0;
}
