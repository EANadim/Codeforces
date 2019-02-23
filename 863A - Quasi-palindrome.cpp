#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int i,j,flag=0;
    char x[MAX];
    cin>>x;
    j=strlen(x)-1;
    for(i=0;i<strlen(x);i++)
        {
            if(x[i]!=x[j])
                {
                    flag=1;
                    break;
                }
            j--;
        }
    if(flag==0)
        {
            cout<<"YES";
            return 0;
        }
    flag=0;
    int counter=0;
    j=strlen(x)-1;
    for(;j>=0;j--)
        {
            if(x[j]=='0')
                {
                    counter++;
                }
            else
                {
                    break;
                }
        }
    //cout<<counter;
    char y[MAX];
    for(i=0;i<strlen(x)+counter;i++)
        {
            y[i]='0';
        }
    j=0;
    for(i=counter;i<strlen(x)+counter;i++)
        {
            y[i]=x[j];
            j++;
        }
    j=strlen(x)+counter-1;
    for(i=0;i<strlen(x)+counter;i++)
        {
            if(y[i]!=y[j])
                {
                    flag=1;
                    break;
                }
            j--;
        }
    if(flag==0)
        {
            cout<<"YES";
        }
    else
        {
            cout<<"NO";
        }
   // cout<<y;
    return 0;
}
