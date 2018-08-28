#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

struct A
{
    ll e,b;
}arr[100005];

bool com(A a,A b)
{
    if(a.e!=b.e)
    return a.e<b.e;
    return a.b>b.b;
}
int main()
{
    ll s,n;
    sc2(s,n);

    for(ll i=1;i<=n;i++)
    {
        sc2(arr[i].e,arr[i].b);
    }
    sort(arr+1,arr+1+n,com);
    ll ok=1;
    for(ll i=1;i<=n;i++)
    {
        if(s<=arr[i].e)
        {
            printf("NO\n");
            return 0;
        }
        s+=arr[i].b;
    }
    printf("YES\n");

    return 0;
}
