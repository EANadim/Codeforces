#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,n,count=0;
    ll x,a[MAX];
    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        {
            cout<<0;
            return 0;
        }
    sort(a,a+n);
    for(i=1;i<n;i++)
        {
            if(a[i]==a[0])
                count--;
        }
    for(i=n-2;i>=0;i--)
        {
            if(a[i]==a[n-1])
                count--;
        }

    x=n+count-2;
    if(x>=0)
        {
            cout<<x;
            return 0;
        }
    else if(x<0)
        {
            cout<<0;
            return 0;
        }
    return 0;
}
