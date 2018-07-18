#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t;
    int t1,t2,t3,t4,o1,o2,o3,o4;
    for(t=n+1;;t++)
        {
            t1=t%10;
            o1=t/10;
            t2=o1%10;
            o2=o1/10;
            t3=o2%10;
            o3=o2/10;
            t4=o3%10;
            o4=o3/10;
            if(t1!=t2 && t1!=t3 && t1!=t4 && t2!=t3 && t2!=t4 && t3!=t4)
                {
                    goto loop;
                }
        }
    loop:
    cout<<t;
    return 0;
}
