#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int s,v1,v2,t1,t2,first,second;
    cin>>s>>v1>>v2>>t1>>t2;
    first=(2*t1)+(v1*s);
    second=(2*t2)+(v2*s);
    if(first<second)
        {
            cout<<"First";
        }
    else if(first>second)
        {
            cout<<"Second";
        }
    else
        {
            cout<<"Friendship";
        }
    return 0;
}
