#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;


int main()
{
    ll n,k,i,a[MAX],sum=0,s;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
        {
            s=a[i]-a[0];
            if(s%k==0)
                sum=s+sum;
            else
                {
                    cout<<-1;
                    return 0;
                }
        }
    if(sum%k==0)
        cout<<sum/k;
    else
        cout<<-1;

    return 0;
}
