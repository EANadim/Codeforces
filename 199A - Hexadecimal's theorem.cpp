#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll n,i,j,k,a[MAX],b[MAX];
    j=0;
    k=0;
    cin>>n;
    if(n==3)
        {
            cout<<1<<" "<<1<<" "<<1;
            return 0;
        }
    if(n==0)
        {
            cout<<0<<" "<<0<<" "<<0;
            return 0;
        }
    if(n==1)
        {
            cout<<1<<" "<<0<<" "<<0;
            return 0;
        }
    a[0]=0;
    a[1]=1;
    for(i=2;a[i]<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }

    for(i=0;a[i]<=n;i++)
        {
            if(a[i]==n)
                {
                    j=i;
                    break;
                }
        }
    for(i=(j-1);i>=0;i--)
        {
            if(a[i]+a[i-1]==n)
                {
                    cout<<a[i]<<" "<<a[i-1]<<" "<<0;
                    return 0;
                }
            else
                {
                    cout<<"I'm too stupid to solve this problem";
                    return 0;
                }
        }
    return 0;
}
