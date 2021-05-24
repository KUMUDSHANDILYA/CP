#include<bits/stdc++.h>
using namespace std;

int find_max_index(int arr[], int i, int j)
{
    int m = i;
    for(int x = i+1; x<=j; x++)
    {
        if(arr[x]>arr[m])
            m = x;
    }
    return m;
}

int max(int a , int b)
{
    return (a>=b)? a: b;
}

int solve(int arr[], int i, int j, int vertex[], int v)
{
    if(i>j || i<0)
        return 0;
    int m = find_max_index(arr, i, j);
    vertex[m] = v;
    int l = solve(arr, i, m-1,vertex ,v+1);
    int r = solve(arr, m+1, j, vertex, v+1);
    return 1 + max(l, r);
}

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
        int vertex[n] = {0};
        int height = solve(arr, 0, n-1, vertex, 0);
        for(int i=0;i<n;i++)
        {
            cout<<vertex[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
