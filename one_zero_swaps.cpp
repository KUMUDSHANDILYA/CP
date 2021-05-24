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
        char str1[n+1], str2[n+1];
        cin>>str1>>str2;
        int o1 = 0, z1 = 0, o2 = 0, z2 = 0;
        for(int j=0;str1[j]!='\0';j++)
        {
            if(str1[j]=='0')
            {
                z1++;
            }
            else o1++;
            if(str2[j]=='0')
            {
                z2++;
            }
            else o2++;

        }
        if(o1==o2 && z1==z2)
            {
                cout<<"Yes\n";
            }
            else cout<<"No\n";
    }
    return 0;
}
