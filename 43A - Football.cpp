#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define MAX 100005
typedef long long ll;
using namespace std;

int main()
{
    int n,flag=0,count1=0,count2=0;
    cin>>n;
    char str[MAX],team1[MAX],team2[MAX];

    for(int i=0;i<n;i++)
        {
            cin>>str;
            if(flag==0)
                {
                    strcpy(team1,str);
                    count1++;
                    flag=1;
                    continue;
                }
            if(strcmp(str,team1)!=0)
                {
                    strcpy(team2,str);
                    count2++;
                }
            if(strcmp(str,team1)==0)
                {
                    count1++;
                }
        }
    if(count1>count2)
        cout<<team1;
    else
        cout<<team2;
    return 0;
}
