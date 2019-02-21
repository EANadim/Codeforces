#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int n,i,j=0,t[MAX],a[MAX],flag=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>t[i];
    sort(t,t+n);
    for(i=0;i<n;i++)
        {
            if(t[i]!=t[i+1])
                {
                    a[j]=t[i];
                    j++;
                }
        }
    for(i=0;i<j;i++)
        {
            if(a[i]+1==a[i+1] && a[i]+2==a[i+2])
                {
                    flag=1;
                    break;
                }
        }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
