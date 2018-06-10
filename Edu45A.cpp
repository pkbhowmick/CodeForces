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
    ll n,m,a,b;
    sc2(n,m);
    sc2(a,b);
    ll va=n%m;
    ll bu=m-va;
    ll aa=bu*a;
    ll bb=va*b;
    if(aa>bb)
        cout<<bb<<endl;
    else
        cout<<aa<<endl;
    //main();
    return 0;
}
