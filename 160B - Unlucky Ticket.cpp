#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int n,i;
    char a[MAX];
    cin>>n;
    n=n*2;
    cin>>a;
    sort(a,a+(n/2));
    sort(a+(n/2),a+n);
    for(i=0;i<n/2;i++)
        {
            if(a[i]>=a[i+(n/2)])
                goto label1;
        }
    cout<<"YES";
    return 0;

    label1:

    for(i=0;i<n/2;i++)
        {
            if(a[i]<=a[i+(n/2)])
                goto label2;
        }
    cout<<"YES";
    return 0;

    label2:

    cout<<"NO";
    return 0;
}
