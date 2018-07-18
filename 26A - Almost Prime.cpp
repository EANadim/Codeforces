#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int m[3000];
int main()
{
    memset(m,0,sizeof(m));
    int i,j,n,freq=0,counter;
    scanf("%d",&n);
    m[0]=0;
    m[1]=0;
    for(i=2;i<=3000;i++)
        {
            m[i]=1;
        }
    for(i=2;i<=3000;i++)
        {
            if(m[i]==1)
                {
                    for(j=2;i*j<=3000;j++)
                        {
                            m[i*j]=0;
                        }
                }
        }
    for(i=1;i<=n;i++)
        {
            counter=0;
            for(j=1;j<=(i/2);j++)
                {
                    if(i%j==0 && m[i/j]==1)
                        {
                            counter++;
                        }
                }
            if(counter==2)
                {
                    freq++;
                }
        }
    cout<<freq;
    return 0;
}
