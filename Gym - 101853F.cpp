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
    ll test;
    sc1(test);
    while(test--)
    {
        ll n,m;
        sc2(n,m);
        ll h1,m1,h2,m2;
        char ch;
        ll mi=0,ho=0;
        while(n--){
        cin>>h1>>ch>>m1;
        cin>>h2>>ch>>m2;
        ho+=h2-h1;
        mi+=m2-m1;
        }
        ll bad=mi/60;
        ho+=bad;
        if(mi<0&&mi%60!=0)
            ho--;

        if(ho>=m)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
