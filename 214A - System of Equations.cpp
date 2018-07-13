#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll n,m,a,b,i,j,count=0;
    cin>>n>>m;
    for(a=0;a<=n && a<=m;a++)
        {
            for(b=0;b<=n && b<=m;b++)
                {
                    i=(a*a)+b;
                    j=a+(b*b);
                    if(n==i && m==j)
                        count++;
                }
        }
    cout<<count;
    return 0;
}
