#include <bits/stdc++.h>
using namespace std;



int main(){
    unordered_map<char, bool> mp;
    string s;
    cin >> s;

    for(auto ch:s){
        mp[ch] =true;
    }
    int d = mp.size();

    if (d%2 ==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    


}