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
        int score[n];
        score[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            score[i] = arr[i];
            if(i+arr[i]<n)
            {
                score[i]+=score[i+arr[i]];
            }
        }
        int max = score[0];
        for(int i=1;i<n;i++)
        {
            if(score[i]>max)
                max = score[i];
        }
        cout<<max<<endl;
    }
    return 0;
}
