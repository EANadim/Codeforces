#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int i,j,k,n,a[MAX],count=0;
    cin>>n;
    for(i=1;i<=7;i++)
        cin>>a[i];
    for(j=0;j<n;j++)
        {
            for(k=1;k<=7;k++)
                {
                    count=count+a[k];
                    if(count>=n)
                        {
                            goto loop;
                        }
                }
        }
    loop:
    cout<<k;
    return 0;
}
