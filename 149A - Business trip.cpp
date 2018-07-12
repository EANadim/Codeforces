#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;
int main()
{
    int k,i,a[MAX],sum=0,count=0;
    cin>>k;
    for(i=0;i<12;i++)
        {
            cin>>a[i];
        }
    sort(a,a+12);
    if(k==0)
        {
            cout<<0;
            return 0;
        }
    for(i=11;i>=0;i--)
        {
            sum=sum+a[i];
            if(sum>=k)
                {
                    count++;
                    break;
                }
            else
                    count++;
        }
    if(k>sum)
        {
            cout<<-1;
            return 0;
        }
    else
            cout<<count;
    return 0;
}
