#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,i,count=0,count_0=0,flag=0;
    char s[MAX];
    cin>>n;
    int position =n-1;
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
                {
                    count_0++;
                    flag=1;
                }
            else if(s[i]=='1')
                {
                    position=i;
                    break;
                }
        }
    for(i=0;i<=position;i++)
        {
            if(s[i]=='0' && s[i]==s[i+1])
                {
                    s[i+1]=='_';
                }
        }
    for(i=0;i<=position;i++)
        {
            if(s[i]=='1')
                {
                    count++;
                }
            else if(s[i]=='0')
                {
                    cout<<count;
                    count=0;
                }
            else if(s[i]=='_')
                {
                    cout<<0;
                }
        }
    if(count!=0)
        cout<<count;
    if(flag==1)
        {
            for(i=0;i<count_0;i++)
                cout<<0;
        }
    return 0;
}
