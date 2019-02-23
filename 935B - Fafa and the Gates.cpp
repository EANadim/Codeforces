#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x=0,y=0,n,flag=0,coin=0;
    char s[100000];
    cin>>n;
    cin>>s;

    if(s[0]=='U')
        {
            y++;
        }
    else if(s[0]=='R')
        {
            x++;
            flag=1;
        }
    for(int i=1;i<strlen(s);i++)
        {
            if(s[i]=='U')
                {
                    y++;
                }
            if(s[i]=='R')
                {
                    x++;
                }
            if(x>y)
                {
                    if(flag==0)
                        {
                            coin++;
                            flag=1;
                        }
                }
            if(x<y)
                {
                    if(flag==1)
                        {
                            coin++;
                            flag=0;
                        }
                }
        }
    cout<<coin;
    return 0;
}
