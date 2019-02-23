#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int i,l[5],s[5],r[5],p[5],flag=0;
    for(i=1;i<=4;i++)
        cin>>l[i]>>s[i]>>r[i]>>p[i];
    for(i=1;i<=4;i++)
        {
            if((l[i]==1 && p[i]==1) || (s[i]==1 && p[i]==1) || (r[i]==1 && p[i]==1))
                {
                    flag=1;
                }
        }

    for(i=1;i<=2;i++)
        {
            if(s[i]==1 && p[i+2]==1)
                {
                    flag=1;
                }
        }
    for(i=4;i>2;i--)
        {
            if(s[i]==1 && p[i-2]==1)
                {
                    flag=1;
                }
        }
    if(l[1]==1 && p[4]==1)
        {
            flag=1;
        }
    for(i=2;i<=4;i++)
        {
            if(l[i]==1 && p[i-1]==1)
                {
                    flag=1;
                }
        }
    if(r[4]==1 && p[1]==1)
        {
            flag=1;
        }
    for(i=1;i<=3;i++)
        {
            if(r[i]==1 && p[i+1]==1)
                {
                    flag=1;
                }
        }
    if(flag==0)
        {
            cout<<"NO";
        }
    else if(flag==1)
        {
            cout<<"YES";
        }
    return 0;
}
