#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,sum;
    long long l;
    cin>>a;
    sum=a;
    cin>>b;
    l=a.length();
    for(int i=0;i<l;i++)
        {
            if(a[i]==b[i])
                sum[i]='0';
            else if(a[i]!=b[i])
                sum[i]='1';
        }
   for(int k=0;k<l;k++)
            cout<<sum[k];
    return 0;
}
