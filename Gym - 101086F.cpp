#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;

struct st
{
    ll arr[6];
};
vector<st>V;
int main()
{
    vector<string>v1={"A"};
    vector<string>v2={"AA","B"};
    vector<string>v3={"AB","C"};
    vector<string>v4={"AC","BB","D"};
    vector<string>v5={"AD","BC","E"};

    for(ll i=0;i<v1.size();i++)
        for(ll j=0;j<v2.size();j++)
            for(ll k=0;k<v3.size();k++)
                for(ll l=0;l<v4.size();l++)
                    for(ll m=0;m<v5.size();m++)
                    {
                        string now=v1[i]+v2[j]+v3[k]+v4[l]+v5[m];
                        if(now.size()>7)
                            continue;
                        st ob;
                        for(ll ii=1;ii<=5;ii++)ob.arr[ii]=0;
                        for(ll ii=0;ii<now.size();ii++)
                        {
                            ll id=now[ii]-'A'+1;
                            ob.arr[id]++;
                        }
                        V.pb(ob);
                    }

    ll test;
    sc1(test);
    while(test--)
    {
        string str;
        cin>>str;
        ll brr[6];
        for(ll i=1;i<=5;i++)brr[i]=0;
        ll ok=0;
        for(ll i=0;i<7;i++)
        {
            ll id=str[i]-'A'+1;
            brr[id]++;
        }
        for(ll i=0;i<V.size()&&ok==0;i++)
        {
            st ob=V[i];
            ll here=1;
            for(ll j=1;j<=5&&ok==0;j++)
            {
                if(ob.arr[j]>brr[j])
                {
                    here=0;
                    break;
                }
            }
            if(here)
                ok=1;
        }
        if(ok==1)
        {
            printf("YES\n");

        }
        else
            printf("NO\n");
    }

    return 0;
}

