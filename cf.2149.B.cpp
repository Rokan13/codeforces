#include<bits/stdc++.h>
using namespace std;

constexpr int MAX = 2 * 1e5 + 5;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        int count=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int freq[MAX];
        for (auto i = 0; i < MAX; ++i)
            freq[i] = 0;
        sort(arr,arr+n);
        for(int i=0; i<n; i=i+2)
        {
            sum=arr[i]-arr[i+1];
            sum=abs(sum);
            //cout<<sum<<endl;
            freq[sum]++;

        }

        int mx = *max_element(freq, freq + MAX);

        for (auto i = 0; i < MAX; ++i)
        if (mx == freq[i]) {
            cout << i << endl;
            break;
        }
    }
}
