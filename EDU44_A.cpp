#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[105];
int main()
{
    ll n;
    sc1(n);
    n=n/2;
    for(ll i=0;i<n;i++)
    {
        sc1(arr[i]);
    }
    sort(arr,arr+n);
    ll od=0;
    ll ev=0;
    for(ll i=1,k=2,j=0;j<n;j++,i+=2,k+=2)
    {
        od+=abs(arr[j]-i);
        ev+=abs(arr[j]-k);
    }
    cout<<min(od,ev)<<endl;
    //main();
    return 0;
}
