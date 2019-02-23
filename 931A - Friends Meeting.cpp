#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,a,b,n=0,mid=0,pos=0,sum=0,x[100000];
    cin>>a>>b;
    if(a>b)
        {
            swap(a,b);
        }
    n=(b-a)+1;
    mid=(b+a)/2;
    //cout<<"n : "<<n<<endl;
    //cout<<"mid : "<<mid<<endl;
    j=1;
    for(i=1;i<=n;i++)
        {
            x[i]=0;
        }
    for(i=a;i<=b;i++)
        {
            x[j]=i;
            j++;
        }
    //for(i=1;i<=n;i++){cout<<"x["<<i<<"] = "<<x[i]<<endl;}
    for(i=1;i<=n;i++)
        {
            if(x[i]==mid)
                {
                    pos=i;
                    break;
                }
        }
    //cout<<"pos : "+pos<<endl;
    j=0;
    for(i=1;i<=pos;i++)
        {
            sum=sum+j;
            j++;
        }
    j=0;
    for(i=n;i>=pos;i--)
        {
            sum=sum+j;
            j++;
        }
    cout<<sum;
    return 0;
}
