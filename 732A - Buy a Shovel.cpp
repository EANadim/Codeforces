#include<bits/stdc++.h>
#include<string.h>
#define pi 2*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    ll k,r,i;
    cin>>k>>r;
    for(i=k;;i=i+k)
    {
        if((i%10==0) || (i-r)%10==0)
            break;
    }
    cout<<i/k;
    return 0;
}
