#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double sum,p[9999];
    sum=0.0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>p[i];
            sum=sum+p[i];
        }
    cout<<sum/n;
    return 0;
}
