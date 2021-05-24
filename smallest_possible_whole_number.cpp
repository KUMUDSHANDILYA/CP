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
        if(k==0)
        {
            cout<<n<<endl;
        }
        else
        {
            int d = n/k;
            int r = n - (d*k);
            cout<<r<<endl;
        }
    }
    return 0;
}
