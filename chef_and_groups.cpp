#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[100001];
        cin>>str;
        int i=0;
        int g = 0;
        if(str[0]=='1')
            g++;
        while(str[i+1]!='\0')
        {
            if(str[i]=='0' && str[i+1] == '1')
                g++;
            i++;
        }
        cout<<g<<endl;
    }
    return 0;
}
