#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll a[MAX],b[MAX],n,i,j,flag=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
    for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
    sort(b,b+n);
    for(i=0;i<n;i++)
        {
            if(b[n-1]+b[n-2]>=sum)
                {
                    flag=1;
                }
        }
    if(flag==1)
        {
            cout<<"YES";
        }
    else
        {
            cout<<"NO";
        }
    return 0;
}
