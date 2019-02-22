#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    string s;
    char a[MAX],b[MAX];
    int i,j,k,l,x=0;
    cin>>s;
    l=s.length();
    if(l==1)
    {
        cout<<"YES";
        return 0;
    }
    for(i=0;i<floor(l/2);i++)
        a[i]=s[i];
    for(i=l-1;i>=ceil(l/2);i--)
        b[i]=s[i];
    j=l-1;
    for(i=0;i<floor(l/2);i++)
        {
            if(a[i]!=b[j])
                x++;
            j--;
        }
    if(x==1)
        cout<<"YES";
    else if(x==0 && l%2!=0)
        cout<<"YES";
    else if(x>1)
        cout<<"NO";
    else
        cout<<"NO";
    return 0;
}
