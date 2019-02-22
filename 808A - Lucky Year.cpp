#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll a,b,l,i,flag=0;
    char n[MAX];
    cin>>n;
    a=atoi(n);
    if(a<10)
        {
            cout<<1;
            return 0;
        }
    l=strlen(n);
    for(i=1;i<l;i++)
        {
           n[i]='0';
        }

    if(n[0]=='9')
        {
            n[0]='1';
            n[l]='0';
        }
    else if(n[0]!='9')
        {
            n[0]=n[0]+1;
        }
    b=atoi(n);
    cout<<b-a;

    return 0;
}
