#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    char c;
    int d;
    cin>>c>>d;
    if((c=='a' && d==8) || (c=='a' && d==1) || (c=='h' && d==8) || (c=='h' && d==1))
        cout<<3;
    else if(c=='a' || c=='h' || d==1 || d==8)
        cout<<5;
    else
        cout<<8;
    return 0;
}
