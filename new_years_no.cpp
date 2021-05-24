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
        int a = n/2020;
        int b = n%2020;
        if(b<=a)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
