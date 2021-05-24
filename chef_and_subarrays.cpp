#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[100000];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int subArray[100000];
        int a = 0;
        for(int i=0;i<k;i++)
            a+=arr[i];
        subArray[0] = a;
        for(int i=1;i<n-k;i++)
        {
            subArray[i] = subArray[i-1] + arr[i+k] - arr[i-1];
        }
        map<int, int> mp;
        int maxF = 1;
        for(int i=0;i<n-k;i++)
        {
            if(mp.find(subArray[i]) == mp.end())
                mp[subArray[i]] = 1;
            else mp[subArray[i]]++;
            if(mp[subArray[i]]>maxF)
                maxF = mp[subArray[i]];
        }
        int rem = n-k-maxF+1;
        cout<<rem<<endl;
    }
    return 0;
}
