#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    char revStr[str.length()];
    for(int i = 0;i<str.length();i++){
        revStr[i] = str[i];
    }
    reverse(revStr[0], revStr[str.length()]);
    cout<<str;
    cout<<revStr;
}
