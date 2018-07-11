#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    char p[MAX];
    int l,i,flag=0;
    cin>>p;
    l=strlen(p);
    for(i=0;i<l;i++)
        {
            if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
                flag=1;
        }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
