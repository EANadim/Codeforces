#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    int i,j,a[MAX],min=2000,min1=-1,min2=-2,n,sub;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        {
            if(i!=n)
                {
                    sub=a[i]-a[i+1];
                    sub=fabs(sub);
                    if(sub<min)
                        {
                            min1=i;
                            min2=i+1;
                            min=sub;
                        }
                }
                if(i==n)
                {
                    sub=a[n]-a[1];
                    sub=fabs(sub);
                    if(sub<min)
                        {
                            min1=n;
                            min2=1;
                            min=sub;
                        }
                }
        }
    cout<<min1<<" "<<min2;
    return 0;
}

