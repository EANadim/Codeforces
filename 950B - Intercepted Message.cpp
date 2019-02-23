#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    ll i,j,sum1,sum2,sum=0,n,m,x[MAX],y[MAX];
    cin>>n>>m;
    for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
    for(i=0;i<m;i++)
        {
            cin>>y[i];
        }
    sum1=x[0];
    sum2=y[0];

    i=0;
    j=0;
    while(sum>=0)//i!=(n-1) && j!=(m-1))
        {
            if(sum1==sum2)
                {
                    //cout<<"sum1==sum2"<<endl;
                    sum++;
                    if(i<n)
                        {
                            i++;
                        }
                    if(j<m)
                        {
                            j++;
                        }
                    if(i==n && j==m)
                        {
                            break;
                        }
                    sum1=x[i];
                    sum2=y[j];
                    //cout<<"Sum :"<<sum<<endl;
                    //cout<<"i : "<<i<<endl;
                    //cout<<"j : "<<j<<endl;
                    //cout<<"sum1 : "<<sum1<<endl;
                    //cout<<"sum2 : "<<sum2<<endl;
                }
            else if(sum1<sum2 && i<n)
                {
                    //cout<<"sum1<sum2"<<endl;
                    //if(i<n)
                        //{
                            i++;
                            sum1=sum1+x[i];
                        //}
                    //cout<<"i : "<<i<<endl;
                    //cout<<"sum1 : "<<sum1<<endl;
                }
            else if(sum2<sum1 && j<m)
                {
                    //cout<<"sum1>sum2"<<endl;
                    //if(j<m)
                        //{
                            j++;
                            sum2=sum2+y[j];
                        //}
                    //cout<<"j : "<<j<<endl;
                    //cout<<"sum2 : "<<sum2<<endl;
                }
        }
    cout<<sum;
    return 0;
}
