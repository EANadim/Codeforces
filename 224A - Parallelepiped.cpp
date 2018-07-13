#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int s[MAX],a,b,c,i;

    for(i=0;i<3;i++)
        cin>>s[i];

    a=sqrt((s[0]*s[2])/s[1]);
    b=sqrt((s[1]*s[2])/s[0]);
    c=sqrt((s[0]*s[1])/s[2]);
    cout<<4*(a+b+c);
    return 0;
}
