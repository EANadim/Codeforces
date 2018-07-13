#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count;
    count=0;
    long long s[5];
    for(i=0;i<4;i++)
        cin>>s[i];
    long long a,b,c,d;
    a=s[0];
    b=s[1];
    c=s[2];
    d=s[3];
    for(i=1;i<4;i++)
        {
            if(a==s[i])
                count++;
        }
    for(i=2;i<4;i++)
        {
            if(b!=a && b==s[i])
                count++;
        }
    for(i=3;i<4;i++)
        {
            if(c!=a && c!=b && c==s[i])
                count++;
        }
    cout<<count;
    return 0;
}
