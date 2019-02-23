#include<bits/stdc++.h>
using namespace std;

struct demo{
    char x[600];
};
int main()
{
    demo d[600];
    int i,j,r,c,flag=0;
    cin>>r>>c;

    for(i=0;i<r;i++)
        {
            cin>>d[i].x;
        }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    if(d[i].x[j]=='.')
                        {
                            d[i].x[j]='D';
                        }
                }
        }
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                {
                    if(d[i].x[j]=='W' && (d[i].x[j+1]=='S' || d[i].x[j-1]=='S' || d[i+1].x[j]=='S' || d[i-1].x[j]=='S'))
                        {
                            flag=1;
                        }
                }
        }
    if(flag==0)
        {
            cout<<"Yes"<<endl;
            for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                        {
                            cout<<d[i].x[j];
                        }
                    cout<<endl;
                }
        }
    else if(flag==1)
        {
            cout<<"No"<<endl;
        }

}
