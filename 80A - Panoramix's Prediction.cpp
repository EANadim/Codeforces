#include <iostream>
using namespace std;
bool isPrime(int i)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        return false;
    }
    return true;
}
int main()
{
    int i,n,m;
    cin>>n>>m;
    int count=0;
    for(i=n;i<=50;i++)
    {
        if(isPrime(i)==true)
            {
                count++;
                if(count==2)
                    {
                        break;
                    }
            }
    }
    if(m==i)
        cout<<"YES";
    else if(m!=i)
        cout<<"NO";
    return 0;
}
