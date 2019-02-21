#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n<2 && (a[0]!=15 && a[0]!=0))
        cout<<-1;
    else if(a[n-1]==0)
        cout<<"UP";
    else if(a[n-1]==15)
        cout<<"DOWN";
    else if(a[n-2]<a[n-1])
        cout<<"UP";
    else if(a[n-2]>a[n-1])
        cout<<"DOWN";
    return 0;
}
