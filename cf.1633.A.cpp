#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n,last=0,s=0;
        cin>>n;
        last=n%10;
        s=n%7;
        if(s==0)
        {
            cout<<n<<endl;
        }
        else if(n>=10 ){
            if(last>s)

            {
                cout<<(n-s)<<endl;
            }
            else
            {
                cout<<(n+7-s)<<endl;
            }

        }


    }
}
