#include <bits/stdc++.h>
#include<math.h>
#include<cstdlib>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    char a[MAX],b[MAX],m[MAX],n[MAX];
    for(int k=0;k<100;k++)
        {
            n[k]=0;
        }
    int i,j,la,lb,lm,ln;
    cin>>a;
    cin>>b;
    cin>>m;

    la=strlen(a);
    lb=strlen(b);
    lm=strlen(m);

    //cout<<"length of a  "<<la<<endl;
    //cout<<"length of b  "<<lb<<endl;
    //cout<<"length of m  "<<lm<<endl;


    if((la+lb)!=lm)
        {
            cout<<"NO";
            return 0;
        }
    for(i=0;i<la;i++)
        {
            n[i]=a[i];
        }
    //cout<<"value i "<<i<<endl;
    int t=i;
    j=0;

    for(i=t;i<t+lb;i++)
        {
            n[i]=b[j];
            j++;
        }
    sort(n,n+la+lb);
    sort(m,m+lm);

    //cout<<"value n :"<<n<<endl;
    //cout<<"value m :"<<m<<endl;

    for(i=0;i<lm;i++)
        {
            if(n[i]!=m[i])
                {
                    cout<<"NO";
                    return 0;
                }
        }
    cout<<"YES";
    return 0;
}
