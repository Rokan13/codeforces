#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,sum=0;
        cin>>x >> y >> a;

        long long total=a/(x+y);
        sum=total*(x+y);
        sum=sum+x;
        if(sum>a){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
}
}
