#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int r = 10;
    int a[] = {1, 3, 6, 10};
    while(t--)
    {
        int n;
        cin>>n;
        int m = n;
        int c = 0;
        int x = m%10;
        while(m>0)
        {
            c++;
            m/=10;
        }
        int ans = (x-1)*r + a[c-1];
        cout<<ans<<endl;
    }
    return 0;
}
