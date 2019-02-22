#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int n,i;
    string x,y,a,b;
    cin>>x>>y;
    cin>>n;
    cout<<x<<" "<<y<<endl;
    for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(x==a)
                x=b;
            else if(y==a)
                y=b;
            cout<<x<<" "<<y<<endl;
        }
    return 0;
}
