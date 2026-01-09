#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        for(char &c :st){
            c=tolower(c);
        }
        if(st=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
