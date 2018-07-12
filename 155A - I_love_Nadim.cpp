#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int p=0;
    int b=a[0];
    int c=a[0];
    for(i=1;i<n;i++)
        {
            if(a[i]>b)
                {
                    p++;
                    b=a[i];
                }
            else if(a[i]<c)
                {
                    p++;
                    c=a[i];
                }
        }
    cout<<p;
    return 0;
}
