#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i;
    char a[MAX];
    cin>>a;
    for(i=0;i<strlen(a);i++)
        {
            cout<<a[i];
            if(a[i]=='p')
                {
                    cout<<"://";
                    break;
                }
        }
    i=i+1;
    cout<<a[i];
    for(i=i+1;i<strlen(a);i++)
        {
            if(a[i]=='r' && a[i+1]=='u')
                {
                    cout<<".";
                    cout<<a[i]<<a[i+1];
                    break;
                }
            cout<<a[i];
        }
    if(i==strlen(a)-2)
        {
            return 0;
        }

    else
        {
            i=i+2;
            cout<<"/";
            for(i=i;i<strlen(a);i++)
                cout<<a[i];
        }
    return 0;
}
