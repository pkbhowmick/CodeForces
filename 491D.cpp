#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll arr[105];
int main()
{
    string a,b;
    cin>>a>>b;

    ll len=a.size();
    for(ll i=0;i<len;i++)
    {
        ll now=0;
        if(a[i]=='0')now++;
        if(b[i]=='0')now++;
        arr[i]=now;
    }

    ll ans=0;
    for(ll i=0;i<len;i++)
    {

        if(i-1>=0&&arr[i]==2&&arr[i-1]>=1)
        {
            ans++;

            arr[i-1]--;
            arr[i]=0;
        }
        else if(i+1<len&&arr[i]==2&&arr[i+1]>=1){
            ans++;

            arr[i+1]--;
            arr[i]=0;
        }
    }
    cout<<ans<<endl;
    //main();
    return 0;
}

