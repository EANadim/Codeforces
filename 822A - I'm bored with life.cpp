#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll i,A,B,x,fact=1;
    cin>>A>>B;
    x=min(A,B);
    for(i=1;i<=x;i++)
        {
            fact=fact*i;
        }
    cout<<fact;
    return 0;
}
