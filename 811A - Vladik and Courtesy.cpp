#include <iostream>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;


int main()
{
    ll x=1,a,b;
    cin>>a>>b;
    loop:
    if(x%2!=0)
        {
            a=a-x;
            if(a<0)
                {
                    cout<<"Vladik";
                    return 0;
                }
            x++;
            goto loop;
        }
    else if(x%2==0)
        {
            b=b-x;
            if(b<0)
                {
                    cout<<"Valera";
                    return 0;
                }
            x++;
            goto loop;
        }
    return 0;
}
