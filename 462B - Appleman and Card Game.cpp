#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,j=0,k,n,count[MAX];
    char s[MAX];
    cin>>n>>k;
    cin>>s;
    for(i=0;i<n;i++)
        count[i]=1;
    sort(s,s+n);
    for(i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
                {
                    count[j]=count[j]+1;
                }
            else if(s[i]!=s[i+1])
                {
                    j++;
                }
        }
    sort(count,count+j);
    ll res=0,sum=0,m;
    for(i=j-1;i>=0;i--)
        {
            sum=sum+count[i];
            if(sum>k)
                {
                    m=sum-k;
                    sum=sum-m;
                    res=res+((count[i]-m)*(count[i]-m));
                    break;
                }
            if(sum<k)
                {
                    res=res+(count[i]*count[i]);
                }
            if(sum==k)
                {
                    res=res+(count[i]*count[i]);
                    break;
                }
        }
    cout<<res;
    return 0;
}
