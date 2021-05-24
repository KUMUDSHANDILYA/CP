#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int filled = 1;
    int active = 0;
    int pos = 1;
    int ans = 0;
    int time = 0;
    for(int i=0;i<n;i++)
    {
        int s, l, a;
        cin>>s>>l>>a;
        if(time==s)
        {
            time++;
            filled
        }
        while(t<=l)
        {
            if(filled == 0){
                filled = 1;
                time++;
            }
            else
            {
                if(active>0){
                    active = active - m;
                    ans = ans + m;
                    filled = 0;
                }
            }
        }
        if(active!=0)
        {
            int pos = 0;
            break;
        }
    }
}
