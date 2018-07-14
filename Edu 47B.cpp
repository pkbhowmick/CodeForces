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
    string str;
    cin>>str;
    ll l=str.size();
    string ans="";
    ll one=0;
    ll two=0;
    ll zero=0;
    string ex="";
    for(ll i=0; i<l; i++)
    {
        if(str[i]=='0')
        {
            if(two==0)
            {
                ans+='0';
            }
            else
                ex+='0';
        }
        else if(str[i]=='1')
        {
            if(two>0)
            {
                ans+='1';
            }
            else
                one++;
        }
        else
        {
            ex+='2';
            two++;
        }
    }
    while(one>0)
    {
        ans+='1';
        one--;
    }
    ans=ans+ex;
    cout<<ans<<endl;
    //main();
    return 0;
}
