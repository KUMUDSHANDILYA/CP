#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w, h, k;
        cin>>w>>h>>k;
        int n = 1;
        while(w%2==0)
        {
            w/=2;
            n*=2;
        }
        while(h%2==0)
        {
            h/=2;
            n*=2;
        }
        if(n>=k)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
