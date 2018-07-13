#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;
int main()
{
    int i,j=0;
    char a[MAX],b[MAX];
    cin>>a;
    for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
                {
                    b[j]=' ';
                    j++;
                    i=i+2;
                    continue;
                }
            else if(a[i]=='W' && a[i+1]=='U' && a[i+2]!='B')
                {
                    b[j]=a[i];
                    j++;
                }
            else if(a[i]=='W' && a[i+1]!='U' && a[i+2]!='B')
                {
                    b[j]=a[i];
                    j++;
                }
            else if(a[i]!='W' && a[i+1]!='U' && a[i+2]!='B')
                {
                    b[j]=a[i];
                    j++;
                }
            else
                {
                    b[j]=a[i];
                    j++;
                }

        }
    cout<<b;
    return 0;
}
