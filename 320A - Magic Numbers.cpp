#include <bits/stdc++.h>
#include<math.h>
#include<cstdlib>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    string a;
    cin>>a;
    if(a[0]!='1')
        {
            cout<<"NO";
            return 0;
        }
    if(a[0]=='1')
        {
            for(int i=0;i<a.length();i++)
                {
                    if(a[i]!='1' && a[i]!='4')
                        {
                            cout<<"NO";
                            return 0;
                        }
                    if(a[i]=='4' && a[i+1]=='4' && a[i+2]=='4')
                        {
                            cout<<"NO";
                            return 0;
                        }
                }
        }
    cout<<"YES";
    return 0;
}
