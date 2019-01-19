#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll n,older,i;
    cin>>n;
    older=n;
    for(i=n;i>=1;i--)
        {
            if(n%i==0 && older%i==0)
                {
                    cout<<i<<" ";
                    older=i;
                }
        }
    return 0;
}
