#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f[100000],flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            cin>>f[i];
        }
    for(int i=1;i<=n;i++)
        {
            if(f[f[f[i]]]==i)
                {
                    flag=1;
                }
        }
    if(flag==0)
        {
            cout<<"NO";
        }
    else if(flag==1)
        {
            cout<<"YES";
        }
    return 0;
}
