#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,l,r,sum1=0,sum2=0;
    cin>>l>>r;
    if((r-l)>=1000)
        {
            cout<<2;
            return 0;
        }
    if(l==r)
        {
            cout<<l;
            return 0;
        }
    for(i=l;i<=r;i++)
        {
            if(i%2==0)
                sum1++;
            if(i%3==0)
                sum2++;
        }
    if(sum1>sum2)
        cout<<2;
    else if(sum1<=sum2)
        cout<<3;
    return 0;
}
