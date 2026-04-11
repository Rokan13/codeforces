#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , x;
    cin>> n;
    int arr[n];
    for(int x = 0; x < n; x++){
        cin >> arr[x];
    }

   int q;
   cin >> q;
   while(q--)
   {
       int m;
       cin >> m;
       int count = 0;

       for(int i = 0;i < n; i++){
        if(arr[i] <= m){
            count++;
        }
       }
       cout<< count <<endl;
   }
}


