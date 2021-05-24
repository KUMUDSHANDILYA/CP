#include<bits/stdc++.h>
using namespace std;

int find_p(int arr[], int n, int i)
{
    int min = arr[i];
    int min_i = i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<min)
        {
            min = arr[j];
            min_i = j;
        }
    }
    return min_i;
}

void reverse(int arr[], int i, int p)
{
    int a = i;
    int b = p;
    while(a<b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }
}

int solve(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n-1;i++)
    {
        int p = find_p(arr, n, i);
        reverse(arr, i, p);
        ans+=p-i+1;
    }
    return ans;
}

int main()
{
    int T;
    cin>>T;
    int t = T;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[100];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans = solve(arr, n);
        cout<<"#"<<(T-t)<<": "<<ans<<endl;
    }
    return 0;
}
