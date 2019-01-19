#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll d1,d2,d3,x[5],min=400000000;
    int i;
    cin>>d1>>d2>>d3;
    for(i=0;i<4;i++)
        x[i]=0;
    x[0]=d1+d1+d2+d2;
    x[1]=d1+d2+d3;
    x[2]=d1+d1+d3+d3;
    x[3]=d2+d2+d3+d3;
    for(i=0;i<4;i++)
        {
            if(x[i]<=min)
                min=x[i];
        }
    cout<<min;
    return 0;
}
