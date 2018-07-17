#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,j,k,l[100000],r[100000],countr,countl,time;
    countr=0;
    countl=0;
    long count1=0;
    long count0=0;
    time=0;
    cin>>n;
    for(long h=0;h<n;h++)
        {
            cin>>l[h]>>r[h];
        }
    for(i=0;i<n;i++)
        {
            if(l[i]==0 && r[i]==1)
                countr++;
            else if(l[i]==1 && r[i]==0)
                countl++;
            else if(l[i]==1 && r[i]==1)
                count1++;
            else if(l[i]==0 && r[i]==0)
                count0++;
        }
    if(countr>countl && countr>count1 && countr>count0 && (count1!=0 || count0!=0 || countl!=0))
        {
            for(j=0;j<n;j++)
                {
                    if(l[j]==1)
                        time++;
                    if(r[j]==0)
                        time++;
                }
        }
    else if(countl>countr && countl>count1 && countl>count0 && (count1!=0 || count0!=0 || countr!=0))
        {
            for(k=0;k<n;k++)
                {
                    if(l[k]==0)
                        time++;
                    if(r[k]==1)
                        time++;
                }
        }
    else if(count1>countr && count1>countl && count1>count0 &&(countl!=0 || count0!=0 || countr!=0))
        {
            for(long m=0;m<n;m++)
                {
                    if(l[m]==0)
                        time++;
                    if(r[m]==0)
                        time++;
                }
        }
    else if(count0>countr && count0>countl && count0>count1 &&(countl!=0 || count1!=0 || countr!=0))
        {
            for(long o=0;o<n;o++)
                {
                    if(l[o]==1)
                        time++;
                    if(r[o]==1)
                        time++;
                }
        }
    else if(countl==countr && countl>count1 && countl>count0)
        {
            for(i=0;i<n;i++)
                {
                    if(l[i]==0)
                        time++;
                    if(r[i]==0)
                        time++;
                }
        }
    else if(count1==count0 && countl<count1 && countl<count1)
        {
            for(i=0;i<n;i++)
                {
                    if(l[i]==0)
                        time++;
                    if(r[i]==0)
                        time++;
                }
        }
    cout<<time;
    return 0;
}
