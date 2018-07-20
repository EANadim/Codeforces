#include<bits/stdc++.h>
using namespace std;
int main()
{
    char number[200];
    int count0=0;
    int count1=0;
    int count2=0;
    cin>>number;
    int length=strlen(number);
    int i=0;
    while(i<length)
        {
            if(number[i]=='.')
                {
                    cout<<"0";
                    i++;
                }
            if(number[i]=='-' && number[i+1]=='.')
                {
                    cout<<"1";
                    i=i+2;
                }
            if(number[i]=='-' && number[i+1]=='-')
                {
                    cout<<"2";
                    i=i+2;
                }
        }
    return 0;
}
