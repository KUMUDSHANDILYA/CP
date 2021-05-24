#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int N;
        cin>>N;
        int sol = 0;
        int x, y, z;
        for(x=0; (x*3)<= N; x++){
            int m = N - x*3;

            for(y = 0; (y*5)<=m; y++){
                int p = m - 5*y;
                if(p% 7 == 0){
                    sol = 1;
                    z = p/7;
                    break;
                }
            }
            if(sol==1){
                break;
            }
        }
        if(sol==0){
            cout<<-1<<"\n";
        }
        else
        {
            cout<<x<<" " <<y<<" " <<z<<"\n";
        }
    }
    return 0;
}
