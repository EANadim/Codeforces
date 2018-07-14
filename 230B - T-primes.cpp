#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

ll m[1000000];
int main()
{
    memset(m,0,sizeof(m));
    ll i,j,n,x,temp;
    cin>>n;
    m[0]=0;
    m[1]=0;
    for(i=2;i<=1000000;i++)
        {
            m[i]=1;
        }
    for(i=2;i<=1000000;i++)
        {
            if(m[i]==1)
                {
                    for(j=2;i*j<=1000000;j++)
                        {
                            m[i*j]=0;
                        }
                }
        }
    for(i=0;i<n;i++)
    {
        cin>>x;
        temp=sqrt(x);
        if((temp*temp==x) && (m[temp]==1))
            {
                cout<<"YES"<<endl;
                continue;
            }
        cout<<"NO"<<endl;

    }
}
