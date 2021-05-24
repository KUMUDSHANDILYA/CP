#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int ans;
        int n;
        cin>>n;
        int arr[100000];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        int d = 0;
        for(int c=1;c<n-1;c++)
        {
            d = d + arr[n-1]-arr[c];
        }
        if(arr[0]<=d)
        {
            ans = d-arr[0];
        }
        else if(arr[0]>d)
        {
            ans = n-1-(arr[0]-d);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
