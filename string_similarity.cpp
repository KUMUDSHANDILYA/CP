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
        char str[101];
        cin>>str;
        int j = 0;
        for(int i=0;i<n;i++)
        {
            cout<<str[j];
            j = j+2;

        }
        cout<<"\n";
    }
    return 0;
}
