#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    set<int>s;
    int N,l[MAX],i,x,y;
    cin>>N;
    for(i=0;i<N;i++)
        {
            cin>>l[i];
            s.insert(l[i]);
        }
    set<int>::iterator it;
    y=0;
    for(it=s.begin();it!=s.end();it++)
        {
            x=*it;
            x=count(l,l+N,x);
            if(x>y)
                y=x;
        }
    cout<<y<<" "<<s.size();
    return 0;
}

