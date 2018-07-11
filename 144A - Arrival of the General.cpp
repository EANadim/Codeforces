#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k,a[200];
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    int max;
    int min;
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    for(i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
    for(j=0;j<n;j++)
        {
            if(a[j]==max)
                {
                    break;
                }
        }
    for(k=(n-1);k>=0;k--)
        {
            if(a[k]==min)
                {
                    break;
                }
        }
    if(j>k)
        cout<<j+n-2-k;
    else
        cout<<j+n-1-k;
    return 0;
}
