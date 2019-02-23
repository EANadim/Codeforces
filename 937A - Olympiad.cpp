#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    set<int>s;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
        {
           cin>>a;
            if(a>0)
                {
                    s.insert(a);
                }
        }
    cout<<s.size();
    return 0;
}
