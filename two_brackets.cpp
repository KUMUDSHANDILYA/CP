#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[200001];
        cin>>str;
        int c1 = 0;
        int c2 = 0;
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]=='[')
            {
                c1++;
            }
            else if(str[j]==']'&& c1%2==1)
            {
                c1++;
            }
            else if(str[j]=='(')
            {
                c2++;
            }
            else if(str[j]==')'&&c2%2==1)
            {
                c2++;
            }
        }

        int ans = c1/2 + c2/2;
        cout<<ans<<"\n";
    }
    return 0;
}


