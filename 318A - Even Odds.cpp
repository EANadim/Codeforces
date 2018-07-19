#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    ll n,k,s,num;
    cin>>n>>k;
    double m=(double) n;
    s=ceil(m/2);
    if(k<=s)
        num=(k*2)-1;
    else if(k>s)
        num=(k-s)*2;
    cout<<num;
    return 0;
}
