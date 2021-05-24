#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int N;
        cin>>N;
        int arr[N][N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>arr[i][j];
            }
        }
        int cycle = 1;
        int Count = 0;
        for(int j=N-1;j>=1;j--)
        {
            int c = j+1;
            if(cycle=1)
            {
                if(arr[0][j]!=j)
                {
                    Count++;
                    cycle=0;
                }
            }
            else if(cycle=0)
            {
                if(arr[0][j]==j)
                {
                    Count++;
                    cycle=1;
                }
            }

        }
        cout<<Count<<"\n";
    }
    return 0;
}
