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
unordered_map<ll,ll>lmp;
unordered_map<ll,ll>rmp;

int main()
{
    ll lmax=0;
    ll rmax=0;
    ll q;
    sc1(q);
    for(ll i=1;i<=q;i++)
    {
        getchar();
        char ch;
        ll id;
        scanf("%c",&ch);
        sc1(id);
        //cout<<ch<<" "<<id<<endl;
        if(ch=='?')
        {
            ll lval,rval;

            if(lmp.count(id)>0)
            {
                lval=lmax-lmp[id];
                rval=rmax+lmp[id]-1;
            }
            else
            {
                rval=rmax-rmp[id];
                lval=lmax+rmp[id]-1;
            }
            printf("%lld\n",min(lval,rval));
        }
        else if(ch=='L')
        {
            lmax++;
            lmp[id]=lmax;
        }
        else if(ch=='R')
        {
            rmax++;
            rmp[id]=rmax;
        }
    }
    return 0;
}
