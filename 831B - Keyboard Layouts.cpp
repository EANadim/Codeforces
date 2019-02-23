#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    map<char,char>M;
    int i;
    char s[MAX],x[MAX],y[MAX];
    for(i=0;i<26;i++)
        {
            cin>>x[i];
        }
    for(i=0;i<26;i++)
        {
            cin>>y[i];
            M[x[i]]=y[i];
            M[x[i]-32]=y[i]-32;
        }
    cin>>s;
    for(i=0;i<strlen(s);i++)
        {
            if(s[i]>=65)
                cout<<M[s[i]];
            else
                cout<<s[i];
        }
    return 0;
}
