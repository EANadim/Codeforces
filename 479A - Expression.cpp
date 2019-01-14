#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int a,b,c,x[8];
    cin>>a>>b>>c;
    memset(x,0,sizeof(a));
    x[0]=(a*b)+c;
    x[1]=a+(b*c);
    x[2]=(a+b)*c;
    x[3]=a*(b+c);
    x[4]=a+b+c;
    x[5]=a*b*c;
    cout<<*max_element(x,x+6);
    return 0;
}
