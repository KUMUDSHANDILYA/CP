#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[i] = a-i;
        }
        map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i])==mp.end())
            {
                mp[arr[i]] = 1;
            }
            else
            {
                mp[arr[i]]++;
            }
        }
        map<int, int>::iterator it;
        long long int ans = 0;
        for(it = mp.begin(); it != mp.end(); it++)
        {
            long long int a = it->second;
            ans = ans + (a*(a-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
