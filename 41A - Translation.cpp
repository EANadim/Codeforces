#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int l1,l2,i,j,flag=0;
    char s[MAX],t[MAX];
    cin>>s>>t;
    l1=strlen(s);
    l2=strlen(t);
    if(l1!=l2)
        {
            cout<<"NO";
            return 0;
        }
    j=l1-1;
    for(i=0;i<l1;i++)
        {
            if(s[i]!=t[j])
                {
                    flag=1;
                }
            j--;
        }
    if(flag==0)
        {
            cout<<"YES";
        }
    else if(flag==1)
        {
            cout<<"NO";
        }
    return 0;
}
