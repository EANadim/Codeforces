#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll k2,k3,k5,k6,sum,min1,min2;
    cin>>k2>>k3>>k5>>k6;
    min1=k2;
    if(k5<=min1)
        min1=k5;
    if(k6<=min1)
        min1=k6;
    sum=0;
    sum=sum+min1*256;
    k2=k2-min1;
    min2=k2;
    if(k3<=min2)
        min2=k3;
    sum=sum+min2*32;
    cout<<sum;
    return 0;
}
