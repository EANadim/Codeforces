#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int l,r,a,div;
    cin>>l>>r>>a;

    while(a!=0)
    {
        if(r<l)
            {
                if(a>0)
                    {
                        r++;
                        a--;
                    }
            }
        else if(l<r)
            {
                if(a>0)
                    {
                        l++;
                        a--;
                    }
            }
        else if(r==l)
            {
                if(a>0)
                    {
                        div=a/2;
                        l=l+div;
                        r=r+div;
                        a=0;
                    }
            }
    }
    if(l>r)
        {
            cout<<2*r;
        }
    else if(l<r)
        {
            cout<<2*l;
        }
    else if(l==r)
        {
            cout<<2*l;
        }
    return 0;
}
