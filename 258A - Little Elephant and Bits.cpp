#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,j,flag=0;
    char a[MAX],b[MAX],c[MAX];
    cin>>a;
    //char b=(char) a;
    //itoa(a,b,10);
    strcpy(b,a);
    int l=strlen(b);
    strcpy(c,b);
    //cout<<b;
    for(i=0;i<l;i++)
        {
            if(b[0]!='0'&& b[i]=='0')
                {
                    for(j=i;j<(l-1);j++)
                        {
                            b[j]=b[j+1];
                        }
                    b[l-1]=NULL;
                    cout<<b;
                    break;
                }
        }
    //char c[l-1];
    //itoa(c,b,10);
    for(i=0;i<l;i++)
        {
            if(c[i]=='0' && c[0]!=0)
                {
                    flag=1;
                    break;
                }
        }
    if(flag==0)
        {
            c[l-1]=NULL;
            cout<<c;
            return 0;
        }
    return 0;
}
