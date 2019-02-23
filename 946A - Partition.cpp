#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,a[MAX],b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
                {
                    b=b+a[i];
                }
            else
                {
                    c=c+a[i];
                }
        }
    cout<<b-c;
    return 0;
}
