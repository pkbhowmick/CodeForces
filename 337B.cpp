#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[100005];
int main()
{
    ll a,b,c,d;
    sc3(a,b,c);
    sc1(d);


    ll gc=__gcd(a,c);
    ll lc=(a*c)/gc;


    b=b*(lc/a);
    d=d*(lc/c);
    a=lc;
    c=lc;

    if(d>b)
    {
        ll gun=(ceil)((double) d/(double)b);
        a=a*gun;
        b=b*gun;

        gc=__gcd(b,d);
        lc=(b*d)/gc;


        a=a*(lc/b);
        c=c*(lc/d);
        b=lc;
        d=lc;
    }

    ll lob,hor;
    if(a==c)
    {
        lob=d;
        hor=b;
    }
    else
    {
        lob=c;
        hor=a;
    }
    lob=hor-lob;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    ll gg=__gcd(lob,hor);
    lob=lob/gg;
    hor=hor/gg;

    printf("%lld/%lld\n",lob,hor);

    return 0;
}
