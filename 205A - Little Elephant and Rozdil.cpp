#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;
int main()
{
    int n,a[MAX],b[MAX],i;
    cin>>n;
    for(i=0;i<n;i++)
        {
            b[i]=0;
            cin>>a[i];
            b[i]=a[i];
        }
    sort(b,b+n);
    if(b[0]==b[1])
        {
            cout<<"Still Rozdil";
            return 0;
        }
    for(i=0;i<n;i++)
        {
            if(a[i]==b[0])
                break;
        }
    cout<<i+1;
    return 0;
}
