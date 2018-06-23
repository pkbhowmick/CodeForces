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
    ll a,b,c,n;
    cin>>a>>b>>c>>n;

    ll now=a+b-c;
    ll ans=n-now;
    if(ans>0&&a>=c&&b>=c)
    cout<<ans<<endl;
    else
        cout<<-1<<endl;
    //main();
    return 0;
}
