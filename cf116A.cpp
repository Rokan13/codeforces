#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     long long sum=0;
      long long mx=0;
    cin>>t;
    while(t--)
    {
      long long exit,enter;

      cin>> exit >> enter ;
         sum+=(enter-exit);
         if(sum>mx)
            mx=sum;

    }
 cout<< mx<<endl;
}
