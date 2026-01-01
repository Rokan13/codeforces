
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   int count=0;
        long long h[t],a[t];
        for(int i=0;i<t;i++){
            cin>>h[i] >> a[i];
        }
        for(int i=0;i<t;i++){
            for(int j=0;j<t;j++){
                if(i!=j){
                    if(h[i]==a[j]){
                        count++;
                    }
                }
            }
        }

    cout<< count;
}
