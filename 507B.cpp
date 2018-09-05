#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

int main()
{
    ll n,k;
    sc2(n,k);
    ll ul=1+k*2;
    ll rem=n%ul;
    if(ul>=n)
    {
        cout<<1<<endl;
        cout<<(n+1)/2<<endl;
        return 0;
    }
    if(rem==0)
    {
        printf("%lld\n",n/ul);
        for(ll i=k+1; i<=n; i=i+ul)
        {
            printf("%lld ",i);
        }
        printf("\n");
        return 0;
    }
    if(rem>=k+1)
    {

        printf("%lld\n",(n/ul)+1);
        for(ll i=k+1,j=1; j<=(n/ul); i=i+ul,j++)
        {
            printf("%lld ",i);
        }
        printf("%lld",n-rem+k+1);
        printf("\n");
        return 0;
    }
    printf("%lld\n",(n/ul)+1);
    for(ll i=1; i<=n; i=i+ul)
    {
        printf("%lld ",i);
    }
    printf("\n");
    return 0;
}
