#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,sum,sum1,sum2;
    cin>>t;
    while(t--)
    {
        int i,j;
        sum=0,sum1=0,sum2=0;
        cin>>n>>m;
        int * arr1 = new int(n);
        int * arr2 = new int(m);
        for(i=0;i<n;i++)
        cin>>arr1[i];
        for(j=0;j<m;j++)
        cin>>arr2[j];
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(arr1[i]==arr2[j])
                sum++;
            }
        }
        cout<<n+m-sum-sum1-sum2<<endl;
    }
}