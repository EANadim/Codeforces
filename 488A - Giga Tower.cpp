#include<bits/stdc++.h>
#include<string.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    ll a,b,x=0,y=0,rem1,rem2,div1,div2,flag1=0,flag2=0;
    cin>>a;
    x=a;
    if(a>=-8 && a<=0)
        {
            a=abs(a)+8;
            cout<<a;
            return 0;
        }
    else if(a<-8)
        {
            y=abs(a);
            loop2:
            y--;
            div2=y;
            division2:
            rem2=div2%10;
            div2=div2/10;
            if(rem2==8)
                {
                    cout<<abs(a)-y;
                    return 0;
                }
            else if(div2==0)
                goto loop2;
            else
                goto division2;
        }
    else if(a>=1)
        {
            loop1:
            x++;
            div1=x;
            division1:
            rem1=div1%10;
            div1=div1/10;
            if(rem1==8)
                {
                    cout<<x-a;
                    return 0;
                }
            else if(div1==0)
                goto loop1;
            else
                goto division1;
        }
    return 0;
}
