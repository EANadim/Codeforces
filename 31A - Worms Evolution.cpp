#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int k=0,i,n,j,sum[MAX],c[MAX],d[MAX],a[MAX];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(i!=j)
                        {
                            sum[k]=a[i]+a[j];
                            c[k]=i;
                            d[k]=j;
                            k++;
                        }
                }
        }
   for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
                {
                    if(sum[j]==a[i])
                        {
                            cout<<i+1<<" "<<c[j]+1<<" "<<d[j]+1;
                            return 0;
                        }
                }
        }
    cout<<-1;
    return 0;
}

