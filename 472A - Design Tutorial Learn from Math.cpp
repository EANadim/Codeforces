#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;
int v[1000000];
int main()
{
    ll n,i,j;
    cin>>n;
    for(i=0;i<=1;i++)
        {
            v[i]=0;
        }
    for(i=2;i<=n;i++)
        {
            v[i]=1;
        }
    for(i=2;i<=n;i++)
        {
            if(v[i]==1)
                {
                    for(j=2;i*j<=n;j++)
                        {
                            v[i*j]=0;
                        }
                }
        }
    for(i=2;i<=(n/2);i++)
        {
            if(v[i]==0 && v[n-i]==0)
                {
                    cout<<i<<" "<<n-i;
                    return 0;
                }
        }
    return 0;
}
