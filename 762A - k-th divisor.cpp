#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll i,n,k;
    set<ll>s;
    cin>>n>>k;
    for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
                {
                    s.insert(i);
                    s.insert(n/i);
                }
        }
    if(k>s.size())
        cout<<-1;
    else
        {
            set<ll>::iterator it;
            ll counter=1;
            for(it=s.begin();it!=s.end();it++)
                {
                    if(counter==k)
                        {
                            cout<<*it;
                            return 0;
                        }
                    counter++;
                }
        }
    return 0;
}
