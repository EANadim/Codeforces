#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,j=0;
    char x[200];
    vector <char>v;
    cin>>n;
    cin>>x;
    v.push_back(x[0]);
    for(int i=1;i<n;i++)
        {
            if((x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='y') && (x[i-1]=='a' || x[i-1]=='e' || x[i-1]=='i' || x[i-1]=='o' || x[i-1]=='u' || x[i-1]=='y'))
                {

                }
            else
                {
                    v.push_back(x[i]);
                }
        }
    for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
    return 0;
}
