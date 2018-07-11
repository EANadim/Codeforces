#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,l,flag=0;
    char s[MAX];
    cin>>s;
    l=strlen(s);
    for(i=1;i<l;i++)
        {
            if(s[i]>=97)
                flag=1;
        }
    if(flag==0)
        {
            for(i=0;i<l;i++)
            {
                if(s[i]>=97)
                    s[i]=s[i]-32;
                else if(s[i]<97)
                    s[i]=s[i]+32;
            }
        }
    cout<<s;
    return 0;
}
