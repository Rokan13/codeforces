#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
set<char>letter;
for(int i=0;i<s.size();i++)
{
    char c=tolower(s[i]);
    if(c>='a' && c<='z'){
        letter.insert(c);
    }
}

if(letter.size()==26)
    cout<<"YES"<< endl;
else
    cout<<"NO"<<endl;

}
