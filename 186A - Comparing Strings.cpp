#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    char a[MAX],b[MAX],t,p[MAX],q[MAX];
    int i,j,l1,l2;
    cin>>a>>b;
    strcpy(p,a);
    strcpy(q,b);
    l1=strlen(a);
    l2=strlen(b);
    sort(p,p+l1);
    sort(q,q+l2);
    if(strcmp(p,q)!=0)
        {
            cout<<"NO";
            return 0;
        }
    if(l1!=l2)
        {
            cout<<"NO";
            return 0;
        }
    int count=0,m,n;
    for(i=0;i<l1;i++)
        {
            if(a[i]!=b[i])
                {
                    if(count==0)
                        m=i;
                    else if(count==1)
                    {
                        n=i;
                    }
                    count++;
                }
        }
    t=a[m];
    a[m]=a[n];
    a[n]=t;
    if(strcmp(a,b)==0)
        {
            cout<<"YES";
            return 0;
        }
    else if(strcmp(a,b)!=0)
        cout<<"NO";
    return 0;
}
