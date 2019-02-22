#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll a[MAX],i,m,n,k,count1,count2;

    count1=0;
    count2=0;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=m;i<=n;i++)
        {
            if(a[i]<=k && a[i]!=0)
                {
                    break;
                }

            if(a[i]>k || a[i]==0)
                {
                    count1=count1+10;
                    if(i==(n))
                        count1=MAX;
                }


        }
    if(m==1)
        {
            cout<<count1;
            return 0;
        }
    for(i=m;i>=1;i--)
        {
            if(a[i]<=k && a[i]!=0)
                    break;
            if(a[i]>k || a[i]==0)
                {
                    count2=count2+10;
                    if(i==1)
                        count2=MAX;
                }


        }
    if(m==n)
        {
            cout<<count2;
            return 0;
        }
    if(count1<count2)
        cout<<count1;
    else if(count1>count2)
        cout<<count2;
    else
        cout<<count1;
    return 0;
}
