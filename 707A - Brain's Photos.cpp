#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int n,m,i,j,flag=0;
    char c;
    cin>>n>>m;
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                {
                    cin>>c;
                    if(c=='C' || c=='M' || c=='Y')
                        flag=1;
                }
        }
    if(flag==0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;
}
