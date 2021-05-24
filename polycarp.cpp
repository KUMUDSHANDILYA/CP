#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, m, x;
        cin>>n>>m>>x;
        long long int i, j;
        j = (x-1)/n;
        i = (x-1)%n;
        long long int ans = (i*m)+ j + 1;
        cout<<ans<<endl;
    }
    return 0;
}
