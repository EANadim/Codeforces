#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll s=0,l=0,n,k,result;
    cin>>n>>k;
    result=n/k;
    if(result%2!=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
