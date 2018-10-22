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

ll ans[100005];
ll a[100005];
ll b[100005];
ll n;
bool ok;
void dfs(ll pos,ll now)
{
    if(pos==n)
    {
        printf("YES\n");
        for(ll i=0;i<n;i++)
        {
            printf("%lld ",ans[i]);
        }
        printf("\n");
        ok=true;
        return;
    }
    for(ll i=0;i<4;i++)
    {
        if((now|i)==a[pos] && (now&i)==b[pos])
        {
            ans[pos]=i;
            //cout<<"call "<<pos+1<<" before "<<now<<" with "<<i<<endl;
            dfs(pos+1,i);
        }
    }
}

int main()
{
    sc1(n);
    for(ll i=1;i<n;i++)
    {
        sc1(a[i]);
    }
    for(ll i=1;i<n;i++)
    {
        sc1(b[i]);
    }
    for(ll i=0;i<4;i++)
    {
        ans[0]=i;
        ok=false;
        dfs(1,i);
        if(ok)
            break;
    }
    if(!ok)
        printf("NO\n");
    return 0;
}
