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
        int arr[3000];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int Count = 0;
        for(int a=0;a<n-3;a++)
        {
            for(int b=a+2;b<n-1;b++)
            {
                if(arr[a]==arr[b])
                {
                    for(int c = a+1;c<b;c++)
                    {
                        for(int d=b+1;d<n;d++)
                        {
                            if(arr[c]==arr[d])
                            {
                                Count++;
                            }
                        }
                    }
                }
            }
        }
        cout<<Count<<"\n";
    }
    return 0;
}
