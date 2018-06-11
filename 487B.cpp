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
    ll n,k;
    sc2(n,k);
    string str;
    cin>>str;
    ll len=str.size();
    bool ok=false;
    for(ll i=0,j=k;i<len&&j<len;i++,j++)
    {
        if(str[i]=='.'&&str[j]=='.')
        {
            str[i]='1';
            str[j]='0';
            ok=true;
            break;

        }
        if(str[i]=='.'&&str[j]!='.')
        {
            if(str[j]=='1')
                str[i]='0';
            else
                str[i]='1';

            ok=true;
            break;
        }
        if(str[j]=='.'&&str[i]!='.')
        {
            if(str[i]=='1')
                str[j]='0';
            else
                str[j]='1';

            ok=true;
            break;
        }
        if(str[i]!=str[j]&&str[i]!='.'&&str[j]!='.')
        {
            ok=true;
            break;
        }
    }
    if(!ok)
    {
        cout<<"NO";
        return 0;
    }
    for(ll i=0;i<len;i++)
    {
        if(str[i]=='.')
            str[i]='0';
    }
    //cout<<"Yes"<<endl;
    cout<<str<<endl;
    return 0;
}
