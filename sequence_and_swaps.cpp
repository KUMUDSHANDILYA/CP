#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, k;
        cin>>n>>k;
        int arr[500];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int ans = 0, l=0;
        int m = 0;
        while(l+1<n)
        {
            if(arr[l+1]<arr[l])
            {

                while(arr[m]<=k)
                {
                    m++;
                }
                if(m<=n)
                {
                    ans = -1;
                    break;
                }
                else if(arr[m]>k)
                {
                    while(m<l)
                    {
                        int temp = arr[m];
                        arr[m] = k;
                        k = temp;
                        m++;
                        ans++;
                    }
                }

            }
            l++;
        }
        if(ans<0)
        {
            cout<<"-1\n  ";
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}
