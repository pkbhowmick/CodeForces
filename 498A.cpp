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
    sc1(n);
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
        if(arr[i]%2==0)
            arr[i]=arr[i]-1;
    }
    for(ll i=0;i<n;i++)
    {
        printf("%lld ",arr[i]);
    }
    printf("\n");
    //main();

    return 0;
}
