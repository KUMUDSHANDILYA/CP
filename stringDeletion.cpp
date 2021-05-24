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
        char arr[200000];
        int Count[200000] = {0};

        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }

        int k = 1, l = 0;
        Count[0] = 1;
        while(k<n)
        {
            if(arr[k]==arr[k-1])
            {
                Count[l]++;
            }
            else{
                l++;
                Count[l]++;
            }
            k++;
        }

        int ones = 0;
        int non_ones = 0;
        for(int m = 0;m<=l;m++)
        {
            if(Count[m]==1){
                ones++;
            }
            else non_ones++;
        }

        int ans = non_ones + (ones+1)/2;
        cout<<ans<<"\n";
    }
}
