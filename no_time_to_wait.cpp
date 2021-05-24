#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, H, x;
    cin>>N>>H>>x;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+N);
    if(arr[N-1]>=H-x)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    return 0;
}
