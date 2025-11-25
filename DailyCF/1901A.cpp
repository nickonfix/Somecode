#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    int n, x;
    cin >> n;
    cin >> x;
    
    int fuel;
    vector <int> p;
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    while(t--){

        fuel = x;
        int count =0;
        int ans = 0;
        
        for(int j=1; j<=x; j++){
            for(int k=0; k<n; k++){
                if(j == p[k]){
                    fuel = x;
                
                }
                else{
                    count-=1;
                    ans+=1;
                }
            }
        }
                
    }
    cout<<"ans";
}