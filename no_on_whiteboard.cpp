#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n>2){
            cout<<2<<"\n";
            int N = n;
            cout<<(n-2)<<" " <<n<<"\n";
            int a = (n + n-2)/2;
            n--;
            cout<<a<<" " <<n<<"\n";
            a = (a+n)/2;
            n--;
            for(int j=0;j<N-3;j++){
                cout<<(n-1)<<" " <<a<<"\n";
                a = ((n-1) + a)/2;
                n--;
            }
        }
        else if(n==2){
            cout<<2<<"\n";
            cout<<1<<" "<<2<<"\n";
        }
    }
}
