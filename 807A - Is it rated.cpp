#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    ll i,n,a[MAX],b[MAX];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                {
                    cout<<"rated";
                    return 0;
                }
        }
    for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
                {
                    cout<<"unrated";
                    return 0;
                }
        }
    cout<<"maybe";
    return 0;
}
