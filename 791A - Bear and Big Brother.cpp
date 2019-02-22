#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,count=0;
    cin>>a>>b;
    bool x=false;
    while(x!=true)
        {
            a=a*3;
            b=b*2;
            count++;
            if(a>b)
                {
                    x=true;
                }

        }
    cout<<count;
    return 0;
}
