#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    ll n,side=0,i;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>s;
            if(s[0]=='T')
                side=side+4;
            if(s[0]=='C')
                side=side+6;
            if(s[0]=='O')
                side=side+8;
            if(s[0]=='D')
                side=side+12;
            if(s[0]=='I')
                side=side+20;
        }
    cout<<side;
    return 0;
}
