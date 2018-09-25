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
    string str;
    cin>>str;
    ll l=str.size();
    ll ans=0;
    ll he=0;
    for(ll i=0;i<l;i++)
    {
        if(i+4<l&&str[i]=='h'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='v'&&str[i+4]=='y')
        {
            he++;
        }
        if(i+4<l&&str[i]=='m'&&str[i+1]=='e'&&str[i+2]=='t'&&str[i+3]=='a'&&str[i+4]=='l')
        {
            ans+=he;
        }

    }
    cout<<ans<<endl;
    return 0;
}
