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
        sort(arr, arr+n);
        int a = arr[n-1];
        int b = arr[n-2];
        int ans1 = (a-1)*b + a;
        int ans2 = (b-1)*a + b;
        int ans_1 = (ans1>=ans2)?ans1:ans2;
        int c = arr[0];
        int d = arr[1];
        int ans3 = (c-1)*d + c;
        int ans4 = (d-1)*c + d;
        int ans_2 = (ans3>=ans4)?ans3:ans4;
        int ans = (ans_1>=ans_2)?ans_1:ans_2;
        cout<<ans<<endl;
    }
    return 0;
}
