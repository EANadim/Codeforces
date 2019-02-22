#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    int i,flag=0,count=0;
    string s;
    cin>>s;
    for(i=0;i<s.length()-1;i++)
        {
            if(s[i]=='V' && s[i+1]!='K' && s[i+2]!='K')
                {
                    s[i+1]='K';
                    flag=1;
                    break;
                }
        }
    if(flag==0)
        {
            for(i=s.length()-1;i>=1;i--)
                {
                    if(s[i]=='K' && s[i-1]!='V' && s[i-2]!='V')
                        {
                            s[i-1]='V';
                            break;
                        }
                }
        }

    for(i=0;i<s.length();i++)
        {
            if(s[i]=='V' && s[i+1]=='K')
                count++;
        }
    //cout<<s<<endl;
    cout<<count;

    return 0;
}
