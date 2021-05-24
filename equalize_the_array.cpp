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
        map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(mp.find(arr[i])!=mp.end())
            {
                mp[arr[i]]++;
            }
            else mp[arr[i]] = 1;
        }
        map<int, int>::iterator it;
        map<int, int> fq;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(fq.find(it->second)!=fq.end())
                fq[it->second]++;
            else fq[it->second] = 1;
        }
        int max_f_f = fq.begin()->first;
        int max_f_f_v = fq.begin()->second;
        for(it = fq.begin(); it!=fq.end(); it++)
        {
            if(it->second>max_f_f_v)
            {
                max_f_f = it->first;
                max_f_f_v = it->second;
            }
        }
        int ans = 0;
        for(it = fq.begin(); it!=fq.end(); it++)
        {
            if(it->first<max_f_f)
            {
                ans += it->second;
            }
            else if(it->first>max_f_f)
            {
                ans += abs(it->first-max_f_f) * it->second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
