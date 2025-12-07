#include<bits/stdc++.h>
using namespace std;
int main()
{
   string st,st2;
   cin>>st >>st2;
    for(int i=0;i<st.length();i++)
    {
            if(st[i]==st2[i])
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
        }
    }
