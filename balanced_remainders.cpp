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
            cin>>arr[i];
        }
        int ans = 0;
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i=0;i<n;i++)
        {
            int rem = arr[i]%3;
            if(rem==0)
                c0++;
            else if(rem == 1)
                c1++;
            else c2++;
        }
        int r = n/3;
        int a = c0-r, b = c1-r, c = c2-r;
        if(c0>r && c1>r)
        {
            ans = ans + 2*a + b;
        }
        else if(c1>r && c2>r)
        {
            ans = ans + 2*b + c;
        }
        else if(c2>r && c0>r)
        {
            ans = ans + a + 2*c;
        }
        else if(c0>r)
        {
            ans = ans + abs(b) + 2*abs(c);
        }
        else if(c1>r)
        {
            ans = ans + abs(c) + 2*abs(a);
        }
        else if(c2>r)
        {
            ans = ans + abs(a) + 2*abs(b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
