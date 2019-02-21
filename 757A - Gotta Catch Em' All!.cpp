#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,j=0,x[7];
    char s[MAX];
    cin>>s;
    for(i=0;i<7;i++)
        x[i]=0;
    for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='B')
                x[0]++;
            else if(s[i]=='u')
                x[1]++;
            else if(s[i]=='l')
                x[2]++;
            else if(s[i]=='b')
                x[3]++;
            else if(s[i]=='a')
                x[4]++;
            else if(s[i]=='s')
                x[5]++;
            else if(s[i]=='r')
                x[6]++;
        }
    x[1]=x[1]/2;
    x[4]=x[4]/2;
    sort(x,x+7);
    cout<<x[0];
    return 0;
}
