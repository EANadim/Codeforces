#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,j,n,k,a[MAX],b[MAX],x,y[MAX],m=0,q=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
    sort(b,b+n);
    for(i=0;i<n;i++)
        {
            m=m+b[i];
            if(m>k)
                {
                    m=m-b[i];
                    j=i;
                    break;
                }
            x=b[i];
            for(int p=0;p<n;p++)
                {
                    if(x==a[p])
                        {
                            a[p]=-1;
                            y[q]=0;
                            y[q]=p;
                            q++;
                            break;
                        }
                }
            j=n;
        }
    cout<<j<<endl;
    sort(y,y+q);
    for(i=0;i<q;i++)
       {
            cout<<y[i]+1<<" ";
        }
    return 0;
}
