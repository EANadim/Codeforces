#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int i,j,k,n,m,c[MAX],maximum,index,cc=0;
    char s[MAX],t[MAX];
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<m;i++)
        cin>>t[i];
    fill(c,c+m-n+1,0);
    j=0;
    for(i=0;i<=m-n;i++)
        {
            for(k=i;k<n+i;k++)
                {
                    if(t[k]==s[j])
                        c[i]++;
                    j++;
                }
            j=0;
        }
    maximum=*max_element(c,c+m-n+1);
    cout<<n-maximum<<endl;
    if(n-maximum==0)
        return 0;
    for(i=0;i<=m-n;i++)
        {
            if(c[i]==maximum)
                index=i;
        }
    j=0;
    for(i=index;i<m;i++)
        {
            if(t[i]!=s[j])
                cout<<j+1<<" ";
            j++;
            if(j>=n)
                break;
        }
    return 0;
}
