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
        int one = 0;
        int two = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                one++;
            else two++;
        }
        if(one == 0 && (two)%2!=0)
            cout<<"No\n";
        else
        {
            if(one%2==0)
                cout<<"Yes\n";
            else cout<<"No\n";
        }

    }
    return 0;
}
