#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,n,flag=0,t25=0,t50=0,a;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a;
            if(a==25)
                {
                    t25=t25+1;
                }
            else if(a==50)
                {
                    if(t25>=1)
                        {
                            t25=t25-1;
                            t50=t50+1;
                        }
                    else
                        {
                            flag=1;
                            break;
                        }
                }
            else if(a==100)
                {
                    if(t25>=1 && t50>=1)
                        {
                            t25=t25-1;
                            t50=t50-1;
                            continue;
                        }
                    else if(t25>=3)
                        {
                            t25=t25-3;
                            continue;
                        }
                    else
                        {
                            flag=1;
                            break;
                        }
                }
        }
    if(flag==0)
        cout<<"YES";
    else if(flag==1)
        cout<<"NO";
    return 0;
}
