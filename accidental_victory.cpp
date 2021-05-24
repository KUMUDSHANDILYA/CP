#include<bits/stdc++.h>
using namespace std;

struct player
{
    int index;
    int points;
    bool flag = false;
};

bool comparator1(player a, player b)
{
    return a.points<b.points;
}

bool comparator2(player a, player b)
{
    return a.index<b.index;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        player arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i].index = i;
            cin>>arr[i].points;
        }
        sort(arr, arr+n, comparator1);
        long long int pre_sum[n];
        pre_sum[0] = arr[0].points;
        for(int i=1; i<n;i++)
        {
            pre_sum[i] = pre_sum[i-1] + arr[i].points;
        }
        int ans = 1;
        arr[n-1].flag = true;
        for(int i=n-2; i>=0; i--)
        {
            if(pre_sum[i]>=arr[i+1].points)
            {
                ans++;
                arr[i].flag = true;
            }
            else break;

        }
        sort(arr, arr+n, comparator2);
        cout<<ans<<endl;
        for(int i=0; i<n; i++)
        {
            if(arr[i].flag)
                cout<<arr[i].index + 1<<" ";
        }
        cout<<endl;

    }
    return 0;
}
