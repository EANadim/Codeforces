#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll n,m,a[MAX],x;
    cin>>n;
    cin>>x;
    a[0]=0;
    a[1]=1;
    a[2]=2;
    m=n%6;
    if(m==0)
        {
            a[0]=0;
            a[1]=1;
            a[2]=2;
        }
    else if(m==1)
        {
            a[0]=1;
            a[1]=0;
            a[2]=2;
        }
    else if(m==2)
        {
            a[0]=1;
            a[1]=2;
            a[2]=0;
        }
    else if(m==3)
        {
            a[0]=2;
            a[1]=1;
            a[2]=0;
        }
    else if(m==4)
        {
            a[0]=2;
            a[1]=0;
            a[2]=1;
        }
    else if(m==5)
        {
            a[0]=0;
            a[1]=2;
            a[2]=1;
        }

    cout<<a[x];
    return 0;
}
