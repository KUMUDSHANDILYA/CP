#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[101];
        cin>>str;
        int l = 0;
        for(l=0;str[l]!='\0';l++);
        cout<<l<<"\n";
    }
    return 0;
}
