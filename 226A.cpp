#include <bits/stdc++.h>
using namespace std;

int main (){

    int a ;
    string b ;
    cin>>a;
    cin>> b;
    int cnt =0;

    for(int i =0; i<b.length(); i++){
        if(b[i-1] == b[i]){
            cnt ++;
        }
    }
    cout<<cnt;

}