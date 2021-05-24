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
        int fav[n];
        int i=0, j=0, k=n-1;
        while(j<n)
        {
            if(j%2==0)
            {
                fav[j] = arr[i];
                j++;
                i++;
            }
            else
            {
                fav[j] = arr[k];
                j++;
                k--;
            }
        }
        for(int i=0;i<n;i++)
            cout<<fav[i]<<" ";
        cout<<endl;
    }
    return 0;
}
