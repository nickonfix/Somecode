#include <bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    cin>>t;
    cin>> n;
    int cnt=0; 
    while(t--){
        while(n>0){
            n-=1;
            cnt++;
            if( n%3 == 0 &&  cnt <10){
                cout<< "First";
            }
            else{
                cout<< "Second";
            }
        }


    }
    return 0;
    
}