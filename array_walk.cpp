#include<iostream>
using namespace std;

int Max(int a, int b);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, k, z;
        cin>>n>>k>>z;
        int arr[300000];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int mx=0;
        int ans = 0;
        int sum = 0;
        for(int r=0;r<z+1;r++)
        {
            int pos = k-2*r;
            if(pos<0)
                continue;
            mx = 0;
            sum = 0;
            for(int s=0;s<pos+1;s++)
            {
                if(s<n-1)
                {
                    mx = Max(mx, arr[s]+arr[s+1]);
                }
                sum = sum + arr[s];
            }
            ans = Max(ans, sum + mx * r);
        }
        cout<<ans<<endl;
    }
    return 0;
}

int Max(int a, int b)
{
    if(a>=b)
        return a;
    else return b;
}
