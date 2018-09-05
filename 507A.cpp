#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[10005];
int main()
{
    ll n,b,w;
    sc3(n,w,b);
    ll ans=0;
    for(ll i=1; i<=n; i++)
    {
        sc1(arr[i]);
    }
    for(ll i=1,j=n; i<=j; i++,j--)
    {
        if(arr[i]==arr[j])
        {
            if(arr[i]==2)
            {
                ans+=min(w,b);
                if(i!=j)
                    ans+=min(w,b);
            }
        }
        else if(arr[i]!=arr[j])
        {
            if(arr[i]==2)
            {
                if(arr[j])
                    ans+=b;
                else
                    ans+=w;
            }
            else if(arr[j]==2)
            {
                if(arr[i])
                    ans+=b;
                else
                    ans+=w;
            }
            else
            {
                ans=-1;
                break;
            }
        }

    }
    printf("%lld\n",ans);
    //main();
    return 0;
}
