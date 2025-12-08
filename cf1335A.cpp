#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        if(n/2!=0)
        {
            sum=(n-1)/2;
        }
        else
        {
            sum=(n-2)/2;
        }
        cout<<sum<<endl;
    }
}
