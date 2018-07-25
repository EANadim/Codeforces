#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,n,a[2000];
    cin>>n;
    for(int j=0;j<n;j++)
        cin>>a[j];
    int s=0;
    int d=0;
    x=0;
    for(i=0;i<n;i++)
        {
            x++;
            if(a[i]>a[n-1])
                {
                    if(x%2!=0)
                        s=s+a[i];
                    else if(x%2==0)
                        d=d+a[i];
                }
            else if(a[i]<a[n-1])
                {
                    if(x%2!=0)
                        {
                            if(a[i]==a[n-1])
                                {
                                   s=s+a[n-1];
                                }
                            else
                                s=s+a[n-1];
                        }

                    else if(x%2==0)
                        {
                            if(a[i]==a[n-1])
                                {
                                   d=d+a[n-1];
                                }
                            else
                                d=d+a[n-1];
                        }
                    n=n-1;
                    i--;
                }
        }

    if(x%2!=0)
        s=s+a[i-1];
    else if(x%2==0)
        d=d+a[i-1];
    cout<<s<<" "<<d;
    return 0;
}
