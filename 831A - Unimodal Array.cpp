#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int a[MAX],n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    int p=0,q=0,r=0;
    i=0;
    for(;i<n;i++)
        {
            if(a[i]<a[i+1])
                p++;
            else
                break;
        }
    for(j=n-1;j>=0;j--)
        {
            if(a[j]<a[j-1])
                q++;
            else
                break;
        }
    for(i=i;i<=(j-1);i++)
        {
            if(a[i]==a[i+1])
                r++;
            else
                break;
        }
    if(p+q+r+1==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
