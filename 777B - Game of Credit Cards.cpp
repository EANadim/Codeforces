#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int n,i,j,count1=0,count2=0;
    char s[MAX],m[MAX],s1[MAX],m1[MAX];
    cin>>n;
    cin>>s>>m;
    sort(s,s+n);
    sort(m,m+n);
    strcpy(s1,s);
    strcpy(m1,m);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    if(m[i]>s[j])
                        {
                            count1++;
                            s[j]='a';
                            break;
                        }
                }
        }
    //cout<<s<<endl;
    for(i=n-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
                {
                    if(m1[i]>=s1[j])
                        {
                            s1[j]='a';
                            break;
                        }
                }
        }
    //cout<<s1<<endl;
    for(i=0;i<n;i++)
        {
            if(s1[i]!='a')
                count2++;
        }
    cout<<count2<<endl<<count1;
    return 0;
}
