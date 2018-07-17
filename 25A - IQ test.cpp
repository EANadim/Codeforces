#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int a[MAX],i,n,even=0,odd=0,flag1,flag2;
    cin>>n;
    for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                {
                    even++;
                    flag1=i;
                }
            else
                {
                    odd++;
                    flag2=i;
                }
        }
    if(even==1)
        cout<<flag1;
    else
        cout<<flag2;

    return 0;
}
