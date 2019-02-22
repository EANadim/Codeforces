#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    int i,j,a,b,c,d,x[MAX],y[MAX];
    cin>>a>>b;
    cin>>c>>d;
    for(i=0;i<=100;i++)
        {
            x[i]=b+a*i;
            y[i]=d+c*i;
        }
    for(i=0;i<=100;i++)
        {
            for(j=0;j<=100;j++)
                {
                    if(x[i]==y[j])
                        {
                            cout<<x[i];
                            return 0;
                        }
                }
        }
    cout<<-1;
    return 0;
}
