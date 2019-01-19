#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    map<string,string>M,N;
    int n,m,i;
    string a,b,c[MAX],x,y,z1,z2;
    cin>>n>>m;
    for(i=0;i<m;i++)
        {
            cin>>x>>y;
            M[x]=y;
            N[y]=x;
        }
    for(i=0;i<n;i++)
        {
            cin>>c[i];
            if(M.find(c[i])!=M.end())
                {
                    z2=M[c[i]];
                    z1=N[z2];
                }
            if(N.find(c[i])!=N.end())
                {
                    z1=N[c[i]];
                    z2=M[z1];
                }
            if(z1.size()<=z2.size())
                c[i]=z1;
            else if(z2.size()<z1.size())
                c[i]=z2;
        }
    for(i=0;i<n;i++)
        cout<<c[i]<<" ";
    return 0;
}
