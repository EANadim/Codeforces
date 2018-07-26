#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    char s[MAX];
    int k,x,a[MAX],maximum=0,sum=0,i;
    cin>>s;
    cin>>k;
    for(i=1;i<=26;i++)
        {
            cin>>x;
            a[i]=x;
            if(x>maximum)
                {
                    maximum=x;
                }
        }
    for(i=1;i<=strlen(s);i++)
        {
            x=s[i-1]-96;
            //cout<<"x : "<<x<<endl;
            sum=sum+a[x]*i;
            //cout<<"a["<<x<<"] : "<<a[x]<<endl;
            //cout<<"sum : "<<sum<<endl;
        }
    for(i=strlen(s)+1;i<=(strlen(s)+k);i++)
        {
            sum=sum+(i)*maximum;
        }
    cout<<sum;
    return 0;
}
