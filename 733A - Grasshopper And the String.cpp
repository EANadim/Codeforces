#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    string s;
    int i,j,x[MAX],y[MAX];
    x[0]=-1;
    cin>>s;
    j=1;
    for(i=0;i<s.length();i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
                {
                    x[j]=i;
                    j++;
                }
        }
    x[j]=s.length();
    for(i=0;i<j;i++)
        {
            y[i]=x[i+1]-x[i];
        }
    sort(y,y+i+1);
    cout<<y[i];
    return 0;
}
