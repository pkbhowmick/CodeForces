#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
ll n,m;

ll A[2005][2005];
ll sum[2005];
int main()
{
    sc2(n,m);
    for(ll i=0;i<n;i++)
    {
        getchar();
        for(ll j=0;j<m;j++)
        {
            scanf("%c",&A[i][j]);
        }
    }
    //memset(sum,0,sizeof sum);
    for(ll j=0;j<m;j++)
    {
        sum[j]=0;
        for(ll i=0;i<n;i++)
        {
            if(A[i][j]=='1')sum[j]++;
        }
        //cout<<sum[j]<<endl;
    }
    for(ll i=0;i<n;i++)
    {
        ll fl=1;
        for(ll j=0;j<m;j++)
        {
            if(A[i][j]=='1'&&sum[j]<=1)
            {
                fl=0;
                break;
            }
        }
        if(fl)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


    return 0;
}
