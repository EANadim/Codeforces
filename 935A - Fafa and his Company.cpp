#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,team=0;
    cin>>n;
    for(int i=1;i<=(n/2);i++)
        {
            if((n%i)==0)
                {
                    team=team+1;
                }
        }
    cout<<team;
    return 0;
}
