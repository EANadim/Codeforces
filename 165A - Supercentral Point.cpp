#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    ll n,x[MAX],y[MAX],i,j,k,l=-1,right,left,upper=0,lower=0,count=0;
    cin>>n;
    for(k=0;k<n;k++)
        cin>>x[k]>>y[k];
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(x[j]>x[i] && y[j]==y[i])
                        right=1;
                    if(x[j]<x[i] && y[j]==y[i])
                        left=1;
                    if(x[j]==x[i] && y[j]<y[i])
                        lower=1;
                    if(x[j]==x[i] && y[j]>y[i])
                        upper=1;
                    if(right==1 && left==1 && lower==1 && upper==1)
                    {
                        if(l!=i)
                            count++;
                        l=i;
                    }
                }
            right=0;
            left=0;
            lower=0;
            upper=0;
        }
    cout<<count;
    return 0;
}
