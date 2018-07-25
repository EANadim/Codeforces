#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int i,n,m,a[MAX],carry;
    carry=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<m;i++)
        {
            if(a[i]<0)
                carry=carry+a[i];
        }
    cout<<carry*-1;
    return 0;
}
