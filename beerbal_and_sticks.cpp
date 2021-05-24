#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        set<int> mySet;

        long int N, res=0;
        cin>>N;
        long int arr[N];
        for(long int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        for(long int i=0;i<N;i++)
        {
            if(mySet.find(arr[i])==mySet.end())
            {
                mySet.insert(arr[i]);
                res++;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
