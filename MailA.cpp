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
    ll x,y,z,t1,t2,t3;
    sc3(x,y,z);
    sc3(t1,t2,t3);
    ll dis1=abs(x-z)+abs(x-y);
    dis1=dis1*t2+3*t3;
    ll dis2=abs(x-y)*t1;
    if(dis1>dis2)
        printf("NO\n");
    else
        printf("YES\n");
    //main();
    return 0;
}
