#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(0.5)
typedef long long ll;

int main()
{
    int i,j,count=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    char m='-';
    int n=-1;
    for(i=0;i<s2.length();i++)
        {
            for(j=0;j<s1.length();j++)
                {
                    if(s2[i]==s1[j] && s2[i]!=' ')
                        {
                            if(m==s1[j] && n==i)
                                continue;
                            else
                                {
                                    m=s1[j];
                                    s1[j]='+';
                                    n=i;
                                }
                        }
                }
        }
     for(j=0;j<s1.length();j++)
        {
            if(s1[j]=='+')
                count++;
        }
    int ls=0;
    for(i=0;i<s2.length();i++)
        {
            if(s2[i]==' ')
                {
                    ls++;
                }
        }
  /*cout<<"COUNT = "<<count<<endl;
    cout<<"Length of s2 = "<<s2.length()-ls<<endl;
    cout<<"s1 = "<<s1<<endl;
    cout<<"s2 = "<<s2<<endl; */
    if(count==(s2.length()-ls))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

