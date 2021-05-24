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
        for(int i=0;i<n-1; i++)
        {
            if(arr[i]>2*arr[i+1])
            {
                int a = arr[i+1];
                int b = arr[i];
                while(b>2*a)
                {
                    a*=2;
                    ans++;
                }
            }
            else if(arr[i+1]>2*arr[i])
            {
                int a = arr[i];
                int b = arr[i+1];
                while(b>2*a)
                {
                    a*=2;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
