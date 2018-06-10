#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

ll mob[300005];

int main()
{
    map<ll,ll>mp;
    map<ll,ll>mp2;
    ll n;
    sc1(n);
    ll par=0;
    for(ll i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        ll len=str.size();
        stack<char>S;
        bool ok=true;
        ll st=0;
        ll cs=0;
        for(ll i=st;i<len;i++)
        {
            if(str[i]=='(')
                S.push('(');
            else
            {
                if(S.empty())
                {
                    cs++;
                }
                else
                {
                    S.pop();
                }
            }
        }
        ll sz=S.size();
        if(cs>0&&sz>0)ok=false;
        if(ok&&cs==0&&sz==0){par++;mob[i]=0;}
        else if(cs>0&&ok){mp2[cs]++;mob[i]=-cs;}
        else if(sz>0&&ok){mp[sz]++;mob[i]=sz;}
    }

    ll ase=0;
    auto it=mp.begin();
    while(it!=mp.end())
    {
        ll now=it->first;
        if(mp2[now]>0)
        {
            ase+=mp2[now]*mp[now];
        }
        it++;
    }
    ll ans=par*par;
    ans+=ase;
    printf("%lld\n",ans);
    return 0;
}
