#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[105],brr[105];
int main()
{
    ll n;
    sc1(n);
    ll s1=0,s2=0;
    for(ll i=1;i<=n;i++)
    {
        sc1(arr[i]);
        s1+=arr[i];
    }
    for(ll i=1;i<=n;i++)
    {
        sc1(brr[i]);
        s2+=brr[i];
    }
    if(s2<=s1)
        printf("Yes\n");
    else
        printf("No\n");
    //main();
    return 0;
}

