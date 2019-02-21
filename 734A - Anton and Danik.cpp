#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    string s;
    int n,i,a=0,d=0;
    cin>>n;
    cin>>s;
    for(i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                a++;
            else
                d++;
        }
    if(a>d)
        cout<<"Anton";
    else if(a<d)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
