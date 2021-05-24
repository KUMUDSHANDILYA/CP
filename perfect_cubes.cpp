#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        map<long long int, long long int> mp;
        for(long long int i=1;i*i*i<=n; i++)
        {
            mp[i*i*i] = i;
            //cout<<mp[i*i*i]<<endl;
        }
        map<long long int, long long int>::iterator it;
        int flag = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            long long int a = it->first;
            long long int b = n-a;
            if(mp.find(b) != mp.end())
            {
                cout<<"YES\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
