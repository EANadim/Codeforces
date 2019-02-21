#include<bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int i,j,m,day=0,p,q;
    cin>>m>>j;
    i=1;
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            while(day<=31)
                {
                    day++;
                    if(day>=31)
                        break;
                    if(j==7)
                        {
                            j=0;
                            i++;
                        }
                    j++;
                }
            cout<<i;
        }
    else if(m==4 || m==6 || m==9 || m==11 )
        {
            while(day<=30)
                {
                    day++;
                    if(day>=30)
                        break;
                    if(j==7)
                        {
                            j=0;
                            i++;
                        }
                    j++;
                }
            cout<<i;
        }
    else if(m==2)
        {
            while(day<=28)
                {
                    day++;
                    if(day>=28)
                        break;
                    if(j==7)
                        {
                            j=0;
                            i++;
                        }
                    j++;
                }
            cout<<i;
        }
    return 0;
}
