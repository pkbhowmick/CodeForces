#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
#define PI acos(-1)
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;


int main()
{
    double two=1.414213562373;
    ll test;
    sc1(test);
    while(test--)
    {
        double a,b,d;
        scanf("%lf%lf%lf",&a,&b,&d);
        double bahu=d/two;
        double r=bahu/2.0;
        double R=d/2.0;
        double ans=PI*(2.0*r*r-R*R)+bahu*bahu;
        printf("%.10f\n",ans);
    }
    return 0;
}
