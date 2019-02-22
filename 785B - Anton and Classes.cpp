#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll i,n,m,l1,l2,r1,r2,res1,res2,min1,min2,max1,max2;
    cin>>n;
    max1=0;
    min1=1000000000;
    max2=0;
    min2=1000000000;
    for(i=0;i<n;i++)
        {
            cin>>l1>>r1;
            if(r1<=min1)
                min1=r1;
            if(l1>=max2)
                max2=l1;
        }
    cin>>m;
    for(i=0;i<m;i++)
        {
            cin>>l2>>r2;
            if(r2<=min2)
                min2=r2;
            if(l2>=max1)
                max1=l2;
        }
/*    cout<<"max1-> "<<max1<<endl<<"min1-> "<<min1<<endl<<"max2-> "<<max2<<endl<<"min2-> "<<min2<<endl;
      cout<<"res1-> "<<max1-min1<<endl;
      cout<<"res2-> "<<max2-min2<<endl;   */
    if(max1<=min1)
        res1=0;
    if(max2<=min2)
        res2=0;
    if(max1>min1)
        res1=max1-min1;
    if(max2>min2)
        res2=max2-min2;
    if(res1>=res2)
    {
        cout<<res1;
        return 0;
    }
    else
        cout<<res2;

    return 0;
}
