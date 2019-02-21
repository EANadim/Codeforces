#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    string s;
    int x,i,sum=0,mark=1,s1,s2;
    cin>>s;
    for(i=0;i<s.size();i++)
        {
            x=s[i]-96;
            s1=abs(26-max(x,mark)+min(x,mark));
            s2=abs(x-mark);
            sum=sum+min(s1,s2);
            mark=x;
        }
    cout<<sum;
    return 0;
}
