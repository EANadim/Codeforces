#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;

int main()
{
    int n,capital=0,count=0,i;
    char s[MAX];
    cin>>n;
    cin.ignore();
    fgets(s,MAX,stdin);
    for(i=0;i<n;i++)
        {
            if(s[i]==' ')
                {
                    capital=max(count,capital);
                    count=0;
                }
            else if(s[i]>=65 && s[i]<=90)
                {
                    count++;
                }
        }
    capital=max(capital,count);
    cout<<capital;
    return 0;
}
