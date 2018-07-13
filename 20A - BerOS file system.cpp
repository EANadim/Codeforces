#include <bits/stdc++.h>
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
            if(a[i]=='/' && a[i-1]!='/')
                {
                    b[j]=a[i];
                    j++;
                }
            else if(a[i]>=97 && a[i]<=122)
                {
                    b[j]=a[i];
                    j++;
                }

        }
    if(b[j-1]=='/' && (b[j-2]>=97 && b[j-2]<=122))
            b[j-1]='\0';
    cout<<b;

    return 0;
}
