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
        int indices[3000][2];
        int m = 0;
        for(int j=0;j<n-2;j++)
        {
            for(int k=j+2;k<n;k++)
            {
                if(arr[j]==arr[k])
                {
                    indices[m][0] = j;
                    indices[m][1] = k;
                    m++;
                }
            }
        }
        //cout<<m<<"\n";
        int Count = 0;
        for(int l=0;l<m-1;l++)
        {
            for(int h=l+1;h<m;h++)
            {
                if((indices[l][0]<indices[h][0]))
                {
                    if((indices[l][1]>indices[h][0])&&(indices[l][1]<indices[h][1]))
                    {
                        Count++;
                    }
                }
            }
        }
        cout<<Count<<"\n";
    }
    return 0;
}

