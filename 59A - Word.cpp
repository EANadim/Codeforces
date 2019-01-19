#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    int uppercase=0;
    int lowercase=0;
    cin>>name;
    int length=strlen(name);
    for(int i=0;i<length;i++)
        {
            if(name[i]>='a' && name[i]<='z')
                {
                    lowercase++;
                }
            else if(name[i]>='A' && name[i]<='Z')
                {
                    uppercase++;
                }
        }
    if(uppercase>lowercase)
        {
            for(int j=0;j<length;j++)
                {
                    if(name[j]>='a' && name[j]<='z')
                        {
                            name[j]=name[j]-32;
                        }
                }
        }
    else if(uppercase<lowercase)
        {
            for(int j=0;j<length;j++)
                {
                    if(name[j]>='A' && name[j]<='Z')
                        {
                            name[j]=name[j]+32;
                        }
                }
        }
    else if(uppercase==lowercase)
        {
            for(int j=0;j<length;j++)
            {
                if(name[j]>='A' && name[j]<='Z')
                    {
                        name[j]=name[j]+32;
                    }
            }
        }

    cout<<name;
    return 0;
}
