#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        int ans = n+1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            int d = abs(arr[i]-k);
            if(d%arr[i]!=0)
            {
                int num = d/arr[i];
                if(num<ans)
                {
                    ans = num;
                }
            }
        }

        t--;
    }
    return 0;
}
