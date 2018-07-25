#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define pi acos(-1.0)
typedef long long ll;


int main()
{
    int i,flag1=0,flag2=0,flag3=0;
    char a[MAX];
    cin>>a;
    if(strlen(a)>=5)
        {
            for(i=0;i<strlen(a);i++)
                {
                    if(a[i]>=65 && a[i]<=90)
                        flag1=1;
                    if(a[i]>=97 && a[i]<=122)
                        flag2=1;
                    if(a[i]>=48 && a[i]<=57)
                        flag3=1;
                }
        }
    if(flag1==1 && flag2==1 && flag3==1)
        cout<<"Correct";
    else
        cout<<"Too weak";
    return 0;
}

