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
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        map<char, int> mp;
        mp[arr[0]] = 1;
        int i = 1;
        int sus = 0;
        while(i<n)
        {
            if(arr[i]!=arr[i-1])
            {
                if(mp.find(arr[i]) == mp.end())
                    mp[arr[i]]=1;
                else {
                    sus = 1;
                    break;
                }
            }
            i++;
        }
        if(sus)
        {
            cout<<"No\n";
        }
        else cout<<"Yes\n";
    }
    return 0;
}
