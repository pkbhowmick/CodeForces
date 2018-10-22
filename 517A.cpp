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
int main()
{
    ll n,m,k;
    sc3(n,m,k);
    ll ans=0;
    while(k>0&&n>0&&m>0)
    {
        if(n==1&&m==1)
        {
            ans+=1;
        }
        else
        ans+=n*2+(m-2)*2;
        n-=4;
        m-=4;
        k--;
    }
    printf("%lld\n",ans);
    //main();
    return 0;
}
