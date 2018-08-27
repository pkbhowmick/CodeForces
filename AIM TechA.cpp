#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

char A[120][120];
int main()
{
    ll n,m;
    sc2(n,m);
    for(ll i=0; i<n; i++)
    {
        cin>>A[i];
    }
    ll sa,sb;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(A[i][j]=='B')
            {
                ll len=0;
                for(ll k=i; k<n; k++)
                {
                    if(A[k][j]=='B')
                        len++;
                    else
                        break;
                }
                sa=i+(len/2);
                sb=j+(len/2);
                sa++;
                sb++;
                cout<<sa<<" "<<sb<<endl;
                return 0;
                //main();

            }
        }
    }

}
