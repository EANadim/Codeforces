#include<bits/stdc++.h>
#define SWAP(a,b)   { int t; t=a; a=b; b=t; }
using namespace std;
void bubble( int arr[], int num ) ;

int main()
{
    int a[100],b[100],n,m;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    bubble(a,n) ;
    cin>>m;
    for(int j=0;j<m;j++)
        cin>>b[j];
    bubble(b,m) ;

    int count=0;
    int p=-1;
    int x;
    int y;
    loop1:
    p++;
    for(x=p;x<n;x++)
    {
       for(y=0;y<m;y++)
        {
            if((a[x]==b[y]) || (a[x]==(b[y]+1)) || (a[x]==(b[y]-1)))
                {
                    count++;
                    b[y]='z';
                    p=x;
                    goto loop1;
                }
        }
    }
    cout<<count;
    return 0;
}
void bubble( int arr[], int num )
{
  int in, jn;
  for(in=1;in<num;in++)
  {
    for(jn=0;jn<(num-1);jn++)
    {
      if( arr[jn]>arr[jn+1] )
        SWAP(arr[jn],arr[jn+1]);
    }
   }
}
