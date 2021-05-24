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
        int votes = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1 || arr[i]==3){
                votes++;
            }
        }
        cout<<votes<<endl;
    }
    return 0;
}
