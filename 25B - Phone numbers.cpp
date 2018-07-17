#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int i,count=0,n;
    char a[MAX];
    cin>>n;
    cin>>a;
    if(n==2 || n==3)
        {
            cout<<a;
            return 0;
        }
    for(i=0;i<n;i++)
        {
            cout<<a[i];
            count++;
            if(count==2 && i<n-2)
                {
                    cout<<'-';
                    count=0;
                }
        }

    return 0;
}
