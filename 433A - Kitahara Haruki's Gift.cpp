#include <bits/stdc++.h>
#include<math.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;
int main()
{
    int i,n,w[MAX],count1=0,count2=0,c;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>w[i];
            if(w[i]==100)
                count1++;
            else if(w[i]==200)
                count2++;
        }
    if(count1==(count2*2))
        {
            cout<<"YES";
            return 0;
        }
    if(count1%2==0 && count2%2==0)
        {
            cout<<"YES";
            return 0;
        }
     if(count2%2==0 && count1%2==0)
        {
            cout<<"YES";
            return 0;
        }
    if(count2%2!=0 && (count1%2==0 && count1!=0))
        {
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
    return 0;
}
