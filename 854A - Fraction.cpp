#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,i;
    cin>>n;
    for(i=n/2;i>=1;i--)
        {
            if(__gcd(i,n-i)==1)
                {
                    cout<<i<<" "<<n-i;
                    break;
                }
        }
    return 0;
}
