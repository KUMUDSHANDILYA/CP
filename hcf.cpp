#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int c = 1;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]!=j+1)
            {
                if((j+1)%arr[j]!=0)
                {
                    c = 0;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";

    }
    return 0;
}
