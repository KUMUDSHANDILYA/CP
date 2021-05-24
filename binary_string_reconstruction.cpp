#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char s[100001];
        cin>>s;
        int x;
        cin>>x;
        char w[100001];
        int L = strlen(s);
        for(int j=0;j<L;j++)
        {
            w[j] = '1';
        }
        w[L] = '\0';
        for(int j=0;j<L;j++)
        {
            if(s[j]=='0')
            {
                if(j-x>=0)
                {
                    w[j-x]='0';
                }
                if(j+x<L)
                {
                    w[j+x]='0';
                }
            }
        }
        char temp[100001];
        for(int j=0;j<L;j++)
        {
            int Set = 0;
            if(j-x>=0)
            {
                if(w[j-x]=='1')
                {
                    temp[j]= '1';
                    Set = 1;
                }
            }
            if(j+x<L)
            {
                if(w[j+x]=='1')
                {
                    temp[j]='1';
                    Set = 1;
                }
            }
            if(Set==0)
            {
                temp[j]='0';
            }
        }
        temp[L] = '\0';
        int match = 1;

        for(int j=0;j<L;j++)
        {
            if(temp[j]!=s[j])
            {
                match = 0;
                break;
            }
        }
        //cout<<w<<"\n"<<temp<<"\n";
        if(match == 0)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<w<<"\n";
        }
    }
    return 0;
}
