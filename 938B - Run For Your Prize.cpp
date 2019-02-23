#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long mp=1,fp=1000000,n,a[100000],i,j,time1=0,time2=0;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    for(i=1;i<=n;i++)
        {
            if(a[i]<=(1000000/2))
                {
                    time1=time1+abs(a[i]-mp);
                    mp=a[i];
                }
        }
    for(j=n;j>=1;j--)
        {
            if(a[j]>(1000000/2))
                {
                    time2=time2+abs(a[j]-fp);
                    fp=a[j];
                }
        }
 /*   for(i=1;i<=n/2;i++)
        {
            time1=time1+abs(a[i]-mp);
        }
    for(j=n;j>=(n/2)+1;j--)
        {
            time2=time2+abs(a[j]-fp);
        } */
    if(time1>=time2)
        {
            cout<<time1;
        }
    else
        {
            cout<<time2;
        }
    return 0;
}
