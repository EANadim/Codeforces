#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    ll n,i,a[MAX];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[0]!=1)
        {
            cout<<1;
            return 0;
        }
    if(a[n-1]==n)
        {
            cout<<n+1;
            return 0;
        }
    for(i=0;i<n-1;i++)
        {
            if(a[i+1]!=a[i]+1)
                {
                    cout<<a[i]+1;
                    return 0;
                }
        }
    return 0;
}
